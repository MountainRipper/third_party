#ifndef MOUNTAINRIPPER_LOGGER_H
#define MOUNTAINRIPPER_LOGGER_H
#include <cinttypes>
#include <string>
#include <chrono>
#include <spdlog/fmt/fmt.h>

//namespace mountain-ripper
namespace mp {


template <typename S, typename... Args>
std::string fmt_format(const S& format, Args&&... args) {
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

    static void log(mp::Logger::LogLevel level,const char* file, const char* function, uint32_t line, const char* log);
    static void log_simple(mp::Logger::LogLevel level,const char* log);

    static void set_level(mp::Logger::LogLevel level);
    static void enable_file_log(const char* path,int32_t max_size,uint8_t max_files);
    static void disable_file_log();
};

}//namespace mountain-ripper

#if defined(_MSC_VER) && !defined(__GNUC__)
#define __PRETTY_FUNCTION__ __FUNCTION__
#endif

#define MP_LOG(level,format, ...) \
    mp::Logger::log_simple(level,fmt_format(format,##__VA_ARGS__).c_str());

#define MP_TRACE(format, ...) MP_LOG(mp::Logger::kLogLevelTrace,format,##__VA_ARGS__)
#define MP_DEBUG(format, ...) MP_LOG(mp::Logger::kLogLevelDebug,format,##__VA_ARGS__)
#define MP_INFO(format, ...)  MP_LOG(mp::Logger::kLogLevelInfo,format,##__VA_ARGS__)
#define MP_WARN(format, ...)  MP_LOG(mp::Logger::kLogLevelWarn,format,##__VA_ARGS__)
#define MP_ERROR(format, ...) MP_LOG(mp::Logger::kLogLevelError,format,##__VA_ARGS__)
#define MP_FATAL(format, ...) MP_LOG(mp::Logger::kLogLevelFatal,format,##__VA_ARGS__)
//#define MP_LOGGER_SIMPLE

#ifdef MP_LOGGER_SIMPLE
#define MP_TRACE_MORE MP_TRACE
#define MP_DEBUG_MORE MP_DEBUG
#define MP_INFO_MORE  MP_INFO
#define MP_WARN_MORE  MP_WARN
#define MP_ERROR_MORE MP_ERROR
#define MP_FATAL_MORE MP_FATAL
#else//MP_LOGGER_SIMPLE

#define MP_LOG_MORE(level,format, ...) \
    mp::Logger::log(level,__FILE__,__PRETTY_FUNCTION__,__LINE__,fmt_format(format,##__VA_ARGS__).c_str());

#define MP_TRACE_MORE(format, ...)  MP_LOG_MORE(mp::Logger::kLogLevelTrace,format,##__VA_ARGS__)
#define MP_DEBUG_MORE(format, ...)  MP_LOG_MORE(mp::Logger::kLogLevelDebug,format,##__VA_ARGS__)
#define MP_INFO_MORE(format, ...)   MP_LOG_MORE(mp::Logger::kLogLevelInfo,format,##__VA_ARGS__)
#define MP_WARN_MORE(format, ...)   MP_LOG_MORE(mp::Logger::kLogLevelWarn,format,##__VA_ARGS__)
#define MP_ERROR_MORE(format, ...)  MP_LOG_MORE(mp::Logger::kLogLevelError,format,##__VA_ARGS__)
#define MP_FATAL_MORE(format, ...)  MP_LOG_MORE(mp::Logger::kLogLevelFatal,format,##__VA_ARGS__)
#endif//MP_LOGGER_SIMPLE


#define MP_CHECK_LEVEL(call,level,format,...) \
{\
 auto result = (call);\
 if(result<0){\
    mp::Logger::log(level,__FILE__,__PRETTY_FUNCTION__,__LINE__,fmt_format(format,##__VA_ARGS__).c_str());\
 }\
}

#define MP_CHECK_TRACE(call,format,...)  MP_CHECK_LEVEL(call,mp::Logger::kLogLevelTrace,format,##__VA_ARGS__)
#define MP_CHECK_DEBUG(call,format,...)  MP_CHECK_LEVEL(call,mp::Logger::kLogLevelDebug,format,##__VA_ARGS__)
#define MP_CHECK_INFO(call,format,...)   MP_CHECK_LEVEL(call,mp::Logger::kLogLevelInfo,format,##__VA_ARGS__)
#define MP_CHECK_WARN(call,format,...)   MP_CHECK_LEVEL(call,mp::Logger::kLogLevelWarn,format,##__VA_ARGS__)
#define MP_CHECK_ERROR(call,format,...)  MP_CHECK_LEVEL(call,mp::Logger::kLogLevelError,format,##__VA_ARGS__)
#define MP_CHECK_FATAL(call,format,...)  MP_CHECK_LEVEL(call,mp::Logger::kLogLevelFatal,format,##__VA_ARGS__)


#define MP_CHECK_BOOL_LEVEL(call,level,format,...) \
{\
 auto result = (call);\
 if(!result){\
    mp::Logger::log(level,__FILE__,__PRETTY_FUNCTION__,__LINE__,fmt_format(format,##__VA_ARGS__).c_str());\
 }\
}

#define MP_CHECK_TRACE_BOOL(call,format,...) MP_CHECK_BOOL_LEVEL(call,mp::Logger::kLogLevelTrace,format,##__VA_ARGS__)
#define MP_CHECK_DEBUG_BOOL(call,format,...) MP_CHECK_BOOL_LEVEL(call,mp::Logger::kLogLevelDebug,format,##__VA_ARGS__)
#define MP_CHECK_INFO_BOOL(call,format,...)  MP_CHECK_BOOL_LEVEL(call,mp::Logger::kLogLevelInfo,format,##__VA_ARGS__)
#define MP_CHECK_WARN_BOOL(call,format,...)  MP_CHECK_BOOL_LEVEL(call,mp::Logger::kLogLevelWarn,format,##__VA_ARGS__)
#define MP_CHECK_ERROR_BOOL(call,format,...) MP_CHECK_BOOL_LEVEL(call,mp::Logger::kLogLevelError,format,##__VA_ARGS__)
#define MP_CHECK_FATAL_BOOL(call,format,...) MP_CHECK_BOOL_LEVEL(call,mp::Logger::kLogLevelFatal,format,##__VA_ARGS__)


inline long high_resolution_clock_get_elapsed_and_reset(std::chrono::high_resolution_clock::time_point &clock)
{
    auto now = std::chrono::high_resolution_clock::now();
    long ns = (now - clock).count();
    clock = now;
    return ns;
}
#define MP_TIMER_NEW(name) auto name = std::chrono::high_resolution_clock::now()
#define MP_TIMER_RESET(name) name = std::chrono::high_resolution_clock::now()
#define MP_TIMER_MS(name) ((std::chrono::high_resolution_clock::now() - name).count() / 1000000.0)
#define MP_TIMER_US(name) ((std::chrono::high_resolution_clock::now() - name).count() / 1000.0)
#define MP_TIMER_NS(name) ((std::chrono::high_resolution_clock::now() - name).count())
#define MP_TIMER_MS_RESET(name) (high_resolution_clock_get_elapsed_and_reset(name) / 1000000.0)
#define MP_TIMER_US_RESET(name) (high_resolution_clock_get_elapsed_and_reset(name) / 1000.0)
#define MP_TIMER_NS_RESET(name) (high_resolution_clock_get_elapsed_and_reset(name))
#endif // LOGGER_H
