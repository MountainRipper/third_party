/*
 * LZ4 file library
 * Copyright (C) 2022, Xiaomi Inc.
 *
 * BSD 2-Clause License (http://www.opensource.org/licenses/bsd-license.php)
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 * - Redistributions in binary form must reproduce the above
 *   copyright notice, this list of conditions and the following disclaimer
 *   in the documentation and/or other materials provided with the
 *   distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 * You can contact the author at :
 * - LZ4 homepage : http://www.lz4.org
 * - LZ4 source repository : https://github.com/lz4/lz4
 */
#include <stdlib.h>
#include <string.h>
#include "lz4.h"
#include "lz4stream.h"

struct LZ4_readStream_s {
  LZ4F_dctx* dctxPtr;
  LZ4_byte* srcBuf;
  size_t srcBufNext;
  size_t srcBufSize;
  size_t srcBufMaxSize;
  uint8_t  eos_;
};

struct LZ4_writeStream_s {
  LZ4F_cctx* cctxPtr;
  FILE* fp;
  LZ4_byte* dstBuf;
  size_t maxWriteSize;
  size_t dstBufMaxSize;
  LZ4F_errorCode_t errCode;
};

LZ4F_errorCode_t LZ4S_readOpen(LZ4_readStream_t** lz4fRead,read_lz4_enc_callback reader,void* opaque)
{
  char buf[LZ4F_HEADER_SIZE_MAX];
  size_t consumedSize;
  LZ4F_errorCode_t ret;
  LZ4F_frameInfo_t info;

  if (lz4fRead == NULL) {
    return -LZ4F_ERROR_GENERIC;
  }

  *lz4fRead = (LZ4_readStream_t*)calloc(1, sizeof(LZ4_readStream_t));
  if (*lz4fRead == NULL) {
    return -LZ4F_ERROR_allocation_failed;
  }

  ret = LZ4F_createDecompressionContext(&(*lz4fRead)->dctxPtr, LZ4F_getVersion());
  if (LZ4F_isError(ret)) {
    free(*lz4fRead);
    return ret;
  }

  consumedSize = reader(opaque,(uint8_t*)buf,sizeof(buf));//fread(buf, 1, sizeof(buf), (*lz4fRead)->fp);
  if (consumedSize != sizeof(buf)) {
    free(*lz4fRead);
    return -LZ4F_ERROR_GENERIC;
  }

  ret = LZ4F_getFrameInfo((*lz4fRead)->dctxPtr, &info, buf, &consumedSize);
  if (LZ4F_isError(ret)) {
      LZ4F_freeDecompressionContext((*lz4fRead)->dctxPtr);
      free(*lz4fRead);
      return ret;
    }

  switch (info.blockSizeID) {
    case LZ4F_default :
    case LZ4F_max64KB :
      (*lz4fRead)->srcBufMaxSize = 64 * 1024;
      break;
    case LZ4F_max256KB:
      (*lz4fRead)->srcBufMaxSize = 256 * 1024;
      break;
    case LZ4F_max1MB:
      (*lz4fRead)->srcBufMaxSize = 1 * 1024 * 1024;
      break;
    case LZ4F_max4MB:
      (*lz4fRead)->srcBufMaxSize = 4 * 1024 * 1024;
      break;
    default:
      LZ4F_freeDecompressionContext((*lz4fRead)->dctxPtr);
      free(*lz4fRead);
      return -LZ4F_ERROR_maxBlockSize_invalid;
  }

  (*lz4fRead)->srcBuf = (LZ4_byte*)malloc((*lz4fRead)->srcBufMaxSize);
  if ((*lz4fRead)->srcBuf == NULL) {
    LZ4F_freeDecompressionContext((*lz4fRead)->dctxPtr);
    free(lz4fRead);
    return -LZ4F_ERROR_allocation_failed;
  }

  (*lz4fRead)->srcBufSize = sizeof(buf) - consumedSize;
  memcpy((*lz4fRead)->srcBuf, buf + consumedSize, (*lz4fRead)->srcBufSize);

  (*lz4fRead)->eos_ = 0;
  return ret;
}

size_t LZ4S_read(LZ4_readStream_t* lz4fRead, void* buf, size_t size,read_lz4_enc_callback reader,void* opaque)
{
  LZ4_byte* p = (LZ4_byte*)buf;
  size_t next = 0;

  if (lz4fRead == NULL || buf == NULL)
    return -LZ4F_ERROR_GENERIC;

  if(lz4fRead->eos_)
      return 0;

  while (next < size) {
      size_t srcsize = lz4fRead->srcBufSize - lz4fRead->srcBufNext;
      size_t dstsize = size - next;
      size_t ret;

      if (srcsize == 0) {
          ret = reader(opaque, (uint8_t *) lz4fRead->srcBuf, lz4fRead->srcBufMaxSize);//fread(lz4fRead->srcBuf, 1, lz4fRead->srcBufMaxSize, lz4fRead->fp);
          if (ret > 0) {
              lz4fRead->srcBufSize = ret;
              srcsize = lz4fRead->srcBufSize;
              lz4fRead->srcBufNext = 0;
          } else if (ret == 0) {
              break;
          } else {
              return -LZ4F_ERROR_GENERIC;
          }
      }

      ret = LZ4F_decompress(lz4fRead->dctxPtr,
                            p, &dstsize,
                            lz4fRead->srcBuf + lz4fRead->srcBufNext,
                            &srcsize,
                            NULL);
      if (LZ4F_isError(ret)) {
          return ret;
      }

      lz4fRead->srcBufNext += srcsize;
      next += dstsize;
      p += dstsize;

      if (ret == 0) {
          lz4fRead->eos_ = 1;
          break;
      }
  }
  return next;
}

LZ4F_errorCode_t LZ4S_readClose(LZ4_readStream_t* lz4fRead)
{
  if (lz4fRead == NULL)
    return -LZ4F_ERROR_GENERIC;
  LZ4F_freeDecompressionContext(lz4fRead->dctxPtr);
  free(lz4fRead->srcBuf);
  free(lz4fRead);
  return LZ4F_OK_NoError;
}

LZ4F_errorCode_t LZ4S_writeOpen(LZ4_writeStream_t** lz4fWrite,  const LZ4F_preferences_t* prefsPtr,write_lz4_dec_callback writer,void* opaque)
{
  LZ4_byte buf[LZ4F_HEADER_SIZE_MAX];
  size_t ret;

  if (lz4fWrite == NULL)
    return -LZ4F_ERROR_GENERIC;

  *lz4fWrite = (LZ4_writeStream_t*)malloc(sizeof(LZ4_writeStream_t));
  if (*lz4fWrite == NULL) {
    return -LZ4F_ERROR_allocation_failed;
  }
  if (prefsPtr != NULL) {
    switch (prefsPtr->frameInfo.blockSizeID) {
      case LZ4F_default :
      case LZ4F_max64KB :
        (*lz4fWrite)->maxWriteSize = 64 * 1024;
        break;
      case LZ4F_max256KB:
        (*lz4fWrite)->maxWriteSize = 256 * 1024;
        break;
      case LZ4F_max1MB:
        (*lz4fWrite)->maxWriteSize = 1 * 1024 * 1024;
        break;
      case LZ4F_max4MB:
        (*lz4fWrite)->maxWriteSize = 4 * 1024 * 1024;
        break;
      default:
        free(lz4fWrite);
        return -LZ4F_ERROR_maxBlockSize_invalid;
      }
    } else {
      (*lz4fWrite)->maxWriteSize = 64 * 1024;
    }

  (*lz4fWrite)->dstBufMaxSize = LZ4F_compressBound((*lz4fWrite)->maxWriteSize, prefsPtr);
  (*lz4fWrite)->dstBuf = (LZ4_byte*)malloc((*lz4fWrite)->dstBufMaxSize);
  if ((*lz4fWrite)->dstBuf == NULL) {
    free(*lz4fWrite);
    return -LZ4F_ERROR_allocation_failed;
  }

  ret = LZ4F_createCompressionContext(&(*lz4fWrite)->cctxPtr, LZ4F_getVersion());
  if (LZ4F_isError(ret)) {
      free((*lz4fWrite)->dstBuf);
      free(*lz4fWrite);
      return ret;
  }

  ret = LZ4F_compressBegin((*lz4fWrite)->cctxPtr, buf, LZ4F_HEADER_SIZE_MAX, prefsPtr);
  if (LZ4F_isError(ret)) {
      LZ4F_freeCompressionContext((*lz4fWrite)->cctxPtr);
      free((*lz4fWrite)->dstBuf);
      free(*lz4fWrite);
      return ret;
  }

  //if (ret != fwrite(buf, 1, ret, fp)) {
  if (ret != writer(opaque, buf, ret)) {
    LZ4F_freeCompressionContext((*lz4fWrite)->cctxPtr);
    free((*lz4fWrite)->dstBuf);
    free(*lz4fWrite);
    return -LZ4F_ERROR_GENERIC;
  }

  (*lz4fWrite)->errCode = LZ4F_OK_NoError;
  return LZ4F_OK_NoError;
}

size_t LZ4S_write(LZ4_writeStream_t* lz4fWrite,const void* buf, size_t size,write_lz4_dec_callback writer,void* opaque)
{
  LZ4_byte* p = (LZ4_byte*)buf;
  size_t remain = size;
  size_t chunk;
  size_t ret;

  if (lz4fWrite == NULL || buf == NULL)
    return -LZ4F_ERROR_GENERIC;
  while (remain) {
    if (remain > lz4fWrite->maxWriteSize)
      chunk = lz4fWrite->maxWriteSize;
    else
      chunk = remain;

    ret = LZ4F_compressUpdate(lz4fWrite->cctxPtr,
                              lz4fWrite->dstBuf, lz4fWrite->dstBufMaxSize,
                              p, chunk,
                              NULL);
    if (LZ4F_isError(ret)) {
      lz4fWrite->errCode = ret;
      return ret;
    }

    //if(ret != fwrite(lz4fWrite->dstBuf, 1, ret, lz4fWrite->fp)) {
    if(ret != writer(opaque,lz4fWrite->dstBuf, ret)) {
      lz4fWrite->errCode = -LZ4F_ERROR_GENERIC;
      return -LZ4F_ERROR_GENERIC;
    }

    p += chunk;
    remain -= chunk;
  }

  return size;
}

LZ4F_errorCode_t LZ4S_writeClose(LZ4_writeStream_t* lz4fWrite,write_lz4_dec_callback writer,void* opaque)
{
  LZ4F_errorCode_t ret = LZ4F_OK_NoError;

  if (lz4fWrite == NULL)
    return -LZ4F_ERROR_GENERIC;

  if (lz4fWrite->errCode == LZ4F_OK_NoError) {
    ret =  LZ4F_compressEnd(lz4fWrite->cctxPtr,
                            lz4fWrite->dstBuf, lz4fWrite->dstBufMaxSize,
                            NULL);
    if (LZ4F_isError(ret)) {
      goto out;
    }

    if (ret != writer(opaque,lz4fWrite->dstBuf, ret)) {
      ret = -LZ4F_ERROR_GENERIC;
    }
  }

out:
  LZ4F_freeCompressionContext(lz4fWrite->cctxPtr);
  free(lz4fWrite->dstBuf);
  free(lz4fWrite);
  return ret;
}
