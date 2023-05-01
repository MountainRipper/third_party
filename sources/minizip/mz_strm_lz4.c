/* mz_strm_zstd.c -- Stream for zstd compress/decompress
   part of the minizip-ng project

   Copyright (C) 2010-2021 Nathan Moinvaziri
      https://github.com/zlib-ng/minizip-ng
   Authors: Force Charlie
      https://github.com/fcharlie

   This program is distributed under the terms of the same license as zlib.
   See the accompanying LICENSE file for the full text of the license.
*/

#include "mz.h"
#include "mz_strm.h"
#include "mz_strm_lz4.h"

#include "third-party/lz4/lz4stream.h"

/***************************************************************************/

static mz_stream_vtbl mz_stream_lz4_vtbl = {
    mz_stream_lz4_open,
    mz_stream_lz4_is_open,
    mz_stream_lz4_read,
    mz_stream_lz4_write,
    mz_stream_lz4_tell,
    mz_stream_lz4_seek,
    mz_stream_lz4_close,
    mz_stream_lz4_error,
    mz_stream_lz4_create,
    mz_stream_lz4_delete,
    mz_stream_lz4_get_prop_int64,
    mz_stream_lz4_set_prop_int64
};

/***************************************************************************/

typedef struct mz_stream_lz4_s {
    mz_stream           stream;
    LZ4_readStream_t    *lz4_reader;
    LZ4_writeStream_t   *lz4_writer;
    LZ4F_preferences_t  lz4_preferences;
    int32_t             mode;
    int32_t             error;
    int64_t             total_in;
    int64_t             total_out;
    int64_t             max_total_in;
    int8_t              initialized;
    uint32_t            preset;
    int8_t              stream_end;
} mz_stream_lz4;

/***************************************************************************/

int32_t mz_stream_lz4_open(void *stream, const char *path, int32_t mode) {
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)stream;

    MZ_UNUSED(path);
    lz4->lz4_reader = NULL;
    lz4->lz4_writer = NULL;
    if (mode & MZ_OPEN_MODE_WRITE) {
#ifdef MZ_ZIP_NO_COMPRESSION
        return MZ_SUPPORT_ERROR;
#else

#endif
    } else if (mode & MZ_OPEN_MODE_READ) {
#ifdef MZ_ZIP_NO_DECOMPRESSION
        return MZ_SUPPORT_ERROR;
#else

#endif
    }

    lz4->initialized = 1;
    lz4->total_in    = 0;
    lz4->total_out   = 0;
    lz4->mode  = mode;
    lz4->stream_end = 0;
    lz4->error = MZ_OK;

    return MZ_OK;
}

int32_t mz_stream_lz4_is_open(void *stream) {
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)stream;
    if (lz4->initialized != 1)
        return MZ_OPEN_ERROR;
    return MZ_OK;
}

size_t lz4_dec_callback(void* opaque, uint8_t* lz4_data,size_t bytes){
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)opaque;
    return mz_stream_read(lz4->stream.base, lz4_data, bytes);
}

int32_t mz_stream_lz4_read(void *stream, void *buf, int32_t size) {
#ifdef MZ_ZIP_NO_DECOMPRESSION
    MZ_UNUSED(stream);
    MZ_UNUSED(buf);
    MZ_UNUSED(size);
    return MZ_SUPPORT_ERROR;
#else
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)stream;
    if(lz4->lz4_reader == NULL){
        LZ4S_readOpen(&lz4->lz4_reader,lz4_dec_callback,lz4);
    }
    if(lz4->stream_end)
        return 0;
    size_t dec_size =  LZ4S_read(lz4->lz4_reader,buf,size,lz4_dec_callback,lz4);
    if(dec_size == 0)
        lz4->stream_end = 1;
    return dec_size;
#endif
}

size_t lz4_enc_callback(void* opaque, uint8_t* lz4_data,size_t bytes){
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)opaque;
    if (mz_stream_write(lz4->stream.base, lz4_data, bytes) != (int32_t)(bytes))
        return MZ_WRITE_ERROR;

    lz4->total_out += bytes;
    return bytes;
}
int32_t mz_stream_lz4_write(void *stream, const void *buf, int32_t size) {
#ifdef MZ_ZIP_NO_COMPRESSION
    MZ_UNUSED(stream);
    MZ_UNUSED(buf);
    MZ_UNUSED(size);
    return MZ_SUPPORT_ERROR;
#else
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)stream;
    LZ4F_errorCode_t lz4_ret = 0;
    if(lz4->lz4_writer == NULL){
        lz4_ret = LZ4S_writeOpen(&lz4->lz4_writer,&lz4->lz4_preferences,lz4_enc_callback,lz4);
        if(LZ4F_isError(lz4_ret) )
            return  MZ_STREAM_ERROR;
    }

    lz4_ret  =LZ4S_write(lz4->lz4_writer,buf,size,lz4_enc_callback,lz4);
    if(LZ4F_isError(lz4_ret) )
        return  MZ_DATA_ERROR;
    lz4->total_in += size;
    return size;
#endif
}

int64_t mz_stream_lz4_tell(void *stream) {
    MZ_UNUSED(stream);

    return MZ_TELL_ERROR;
}

int32_t mz_stream_lz4_seek(void *stream, int64_t offset, int32_t origin) {
    MZ_UNUSED(stream);
    MZ_UNUSED(offset);
    MZ_UNUSED(origin);

    return MZ_SEEK_ERROR;
}

int32_t mz_stream_lz4_close(void *stream) {
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)stream;

    if (lz4->mode & MZ_OPEN_MODE_WRITE) {
#ifdef MZ_ZIP_NO_COMPRESSION
        return MZ_SUPPORT_ERROR;
#else
        if(lz4->lz4_writer){
            LZ4S_writeClose(lz4->lz4_writer,lz4_enc_callback,lz4);
        }
        lz4->lz4_writer = NULL;
#endif
    } else if (lz4->mode & MZ_OPEN_MODE_READ) {
#ifdef MZ_ZIP_NO_DECOMPRESSION
        return MZ_SUPPORT_ERROR;
#else
        if(lz4->lz4_reader){
            LZ4S_readClose(lz4->lz4_reader);
        }
        lz4->lz4_reader = NULL;
#endif
    }
    lz4->initialized = 0;
    return MZ_OK;
}

int32_t mz_stream_lz4_error(void *stream) {
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)stream;
    return lz4->error;
}

int32_t mz_stream_lz4_get_prop_int64(void *stream, int32_t prop, int64_t *value) {
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)stream;
    switch (prop) {
    case MZ_STREAM_PROP_TOTAL_IN:
        *value = lz4->total_in;
        break;
    case MZ_STREAM_PROP_TOTAL_IN_MAX:
        *value = lz4->max_total_in;
        break;
    case MZ_STREAM_PROP_TOTAL_OUT:
        *value = lz4->total_out;
        break;
    case MZ_STREAM_PROP_HEADER_SIZE:
        *value = 0;
        break;
    default:
        return MZ_EXIST_ERROR;
    }
    return MZ_OK;
}

int32_t mz_stream_lz4_set_prop_int64(void *stream, int32_t prop, int64_t value) {
    mz_stream_lz4 *lz4 = (mz_stream_lz4 *)stream;
    switch (prop) {
    case MZ_STREAM_PROP_COMPRESS_LEVEL:
        if (value < 0)
            lz4->lz4_preferences.compressionLevel = 1;
        else
            lz4->lz4_preferences.compressionLevel = value;
        return MZ_OK;
    case MZ_STREAM_PROP_TOTAL_IN_MAX:
        lz4->max_total_in = value;
        return MZ_OK;
    }
    return MZ_EXIST_ERROR;
}

void *mz_stream_lz4_create(void **stream) {
    mz_stream_lz4 *lz4 = NULL;
    lz4 = (mz_stream_lz4 *)MZ_ALLOC(sizeof(mz_stream_lz4));
    if (lz4 != NULL) {
        memset(lz4, 0, sizeof(mz_stream_lz4));
        lz4->stream.vtbl = &mz_stream_lz4_vtbl;
    }
    if (stream != NULL)
        *stream = lz4;
    return lz4;
}

void mz_stream_lz4_delete(void **stream) {
    mz_stream_lz4 *zstd = NULL;
    if (stream == NULL)
        return;
    zstd = (mz_stream_lz4 *)*stream;
    if (zstd != NULL)
        MZ_FREE(zstd);
    *stream = NULL;
}

void *mz_stream_lz4_get_interface(void) {
    return (void *)&mz_stream_lz4_vtbl;
}
