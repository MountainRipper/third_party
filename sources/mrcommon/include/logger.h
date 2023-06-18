#ifndef MOUNTAINRIPPER_LOGGER_H
#define MOUNTAINRIPPER_LOGGER_H
#include <cinttypes>
#include <string>
#include <chrono>
//logger usr pre-build spdlog library
#define SPDLOG_COMPILED_LIB
#include <spdlog/fmt/fmt.h>

//namespace mountain-ripper
namespace mr {


template <typename S, typename... Args>
inline std::string fmt_format(const S& format, Args&&... args) {
    return fmt::vformat(format, fmt::make_format_args(args...));
}

class Logger
{
public:
    //same as spdlog::level::level_enum
    enum LogLevel : int8_t
    {
        kLogLevelTrace = 0,
        kLogLevelDebug = 1,
        kLogLevelInfo = 2,
        kLogLevelWarn = 3,
        kLogLevelError = 4,
        kLogLevelFatal = 5,
        kLogLevelOff = 6
    };

    static void log(mr::Logger::LogLevel level,const char* file, const char* function, uint32_t line, const char* log);
    static void log_simple(mr::Logger::LogLevel level,const char* log);

    static void set_level(mr::Logger::LogLevel level);
    static void enable_file_log(const char* path,int32_t max_size,uint8_t max_files);
    static void disable_file_log();
};

}//namespace mountain-ripper

#if defined(_MSC_VER) && !defined(__GNUC__)
#define __PRETTY_FUNCTION__ __FUNCTION__
#endif

#define MR_LOG(level,format, ...) \
    mr::Logger::log_simple(level,mr::fmt_format(format,##__VA_ARGS__).c_str());

#define MR_TRACE(format, ...) MR_LOG(mr::Logger::kLogLevelTrace,format,##__VA_ARGS__)
#define MR_DEBUG(format, ...) MR_LOG(mr::Logger::kLogLevelDebug,format,##__VA_ARGS__)
#define MR_INFO(format, ...)  MR_LOG(mr::Logger::kLogLevelInfo,format,##__VA_ARGS__)
#define MR_WARN(format, ...)  MR_LOG(mr::Logger::kLogLevelWarn,format,##__VA_ARGS__)
#define MR_ERROR(format, ...) MR_LOG(mr::Logger::kLogLevelError,format,##__VA_ARGS__)
#define MR_FATAL(format, ...) MR_LOG(mr::Logger::kLogLevelFatal,format,##__VA_ARGS__)
//#define MR_LOGGER_SIMPLE

#ifdef MR_LOGGER_SIMPLE
#define MR_TRACE_MORE MR_TRACE
#define MR_DEBUG_MORE MR_DEBUG
#define MR_INFO_MORE  MR_INFO
#define MR_WARN_MORE  MR_WARN
#define MR_ERROR_MORE MR_ERROR
#define MR_FATAL_MORE MR_FATAL
#else//MR_LOGGER_SIMPLE

#define MR_LOG_MORE(level,format, ...) \
    mr::Logger::log(level,__FILE__,__PRETTY_FUNCTION__,__LINE__,mr::fmt_format(format,##__VA_ARGS__).c_str());

#define MR_TRACE_MORE(format, ...)  MR_LOG_MORE(mr::Logger::kLogLevelTrace,format,##__VA_ARGS__)
#define MR_DEBUG_MORE(format, ...)  MR_LOG_MORE(mr::Logger::kLogLevelDebug,format,##__VA_ARGS__)
#define MR_INFO_MORE(format, ...)   MR_LOG_MORE(mr::Logger::kLogLevelInfo,format,##__VA_ARGS__)
#define MR_WARN_MORE(format, ...)   MR_LOG_MORE(mr::Logger::kLogLevelWarn,format,##__VA_ARGS__)
#define MR_ERROR_MORE(format, ...)  MR_LOG_MORE(mr::Logger::kLogLevelError,format,##__VA_ARGS__)
#define MR_FATAL_MORE(format, ...)  MR_LOG_MORE(mr::Logger::kLogLevelFatal,format,##__VA_ARGS__)
#endif//MR_LOGGER_SIMPLE


#define MR_CHECK_LEVEL(call,level,format,...) \
{\
 auto result = (call);\
 if(result<0){\
    mr::Logger::log(level,__FILE__,__PRETTY_FUNCTION__,__LINE__,mr::fmt_format(format,##__VA_ARGS__).c_str());\
 }\
}

#define MR_CHECK_TRACE(call,format,...)  MR_CHECK_LEVEL(call,mr::Logger::kLogLevelTrace,format,##__VA_ARGS__)
#define MR_CHECK_DEBUG(call,format,...)  MR_CHECK_LEVEL(call,mr::Logger::kLogLevelDebug,format,##__VA_ARGS__)
#define MR_CHECK_INFO(call,format,...)   MR_CHECK_LEVEL(call,mr::Logger::kLogLevelInfo,format,##__VA_ARGS__)
#define MR_CHECK_WARN(call,format,...)   MR_CHECK_LEVEL(call,mr::Logger::kLogLevelWarn,format,##__VA_ARGS__)
#define MR_CHECK_ERROR(call,format,...)  MR_CHECK_LEVEL(call,mr::Logger::kLogLevelError,format,##__VA_ARGS__)
#define MR_CHECK_FATAL(call,format,...)  MR_CHECK_LEVEL(call,mr::Logger::kLogLevelFatal,format,##__VA_ARGS__)


#define MR_CHECK_BOOL_LEVEL(call,level,format,...) \
{\
 auto result = (call);\
 if(!result){\
    mr::Logger::log(level,__FILE__,__PRETTY_FUNCTION__,__LINE__,mr::fmt_format(format,##__VA_ARGS__).c_str());\
 }\
}

#define MR_CHECK_TRACE_BOOL(call,format,...) MR_CHECK_BOOL_LEVEL(call,mr::Logger::kLogLevelTrace,format,##__VA_ARGS__)
#define MR_CHECK_DEBUG_BOOL(call,format,...) MR_CHECK_BOOL_LEVEL(call,mr::Logger::kLogLevelDebug,format,##__VA_ARGS__)
#define MR_CHECK_INFO_BOOL(call,format,...)  MR_CHECK_BOOL_LEVEL(call,mr::Logger::kLogLevelInfo,format,##__VA_ARGS__)
#define MR_CHECK_WARN_BOOL(call,format,...)  MR_CHECK_BOOL_LEVEL(call,mr::Logger::kLogLevelWarn,format,##__VA_ARGS__)
#define MR_CHECK_ERROR_BOOL(call,format,...) MR_CHECK_BOOL_LEVEL(call,mr::Logger::kLogLevelError,format,##__VA_ARGS__)
#define MR_CHECK_FATAL_BOOL(call,format,...) MR_CHECK_BOOL_LEVEL(call,mr::Logger::kLogLevelFatal,format,##__VA_ARGS__)


inline long high_resolution_clock_get_elapsed_and_reset(std::chrono::high_resolution_clock::time_point &clock)
{
    auto now = std::chrono::high_resolution_clock::now();
    long ns = (now - clock).count();
    clock = now;
    return ns;
}

#define MR_TIMER_DEFINE(name) std::chrono::high_resolution_clock::time_point name
#define MR_TIMER_NOW std::chrono::high_resolution_clock::now()
#define MR_TIMER_NEW(name) auto name = std::chrono::high_resolution_clock::now()
#define MR_TIMER_RESET(name) name = std::chrono::high_resolution_clock::now()
#define MR_TIMER_MS(name) ((std::chrono::high_resolution_clock::now() - name).count() / 1000000.0)
#define MR_TIMER_US(name) ((std::chrono::high_resolution_clock::now() - name).count() / 1000.0)
#define MR_TIMER_NS(name) ((std::chrono::high_resolution_clock::now() - name).count())
#define MR_TIMER_MS_RESET(name) (high_resolution_clock_get_elapsed_and_reset(name) / 1000000.0)
#define MR_TIMER_US_RESET(name) (high_resolution_clock_get_elapsed_and_reset(name) / 1000.0)
#define MR_TIMER_NS_RESET(name) (high_resolution_clock_get_elapsed_and_reset(name))
#endif // LOGGER_H
