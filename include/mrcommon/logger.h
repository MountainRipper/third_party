//
// Created by 徐伟 on 25-4-17.
//

#ifndef LOGGER_H
#define LOGGER_H

#include  <spdlog/spdlog.h>

#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/sinks/daily_file_sink.h"
#include "spdlog/sinks/stdout_color_sinks.h"

struct LoggerPrivate;
class Logger {
public:
    enum Level{
        kLogLevelTrace = spdlog::level::trace,
        kLogLevelDebug = spdlog::level::debug,
        kLogLevelInfo  = spdlog::level::info,
        kLogLevelWarn  = spdlog::level::warn,
        kLogLevelError = spdlog::level::err,
        kLogLevelFatal = spdlog::level::critical,
        kLogLevelOff   = spdlog::level::off,
    };
    Logger() {

    }
    ~Logger() {
        deinit();
    }
    static Logger &instance() {
        static Logger instance;
        return instance;
    }

    static spdlog::logger* logger() {
        return instance().logger_.get();
    }


    int32_t init(Level file_level = kLogLevelOff, bool file_level_err = kLogLevelError) {
        console_ = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
        console_->set_level(spdlog::level::trace);

        file_ = std::make_shared<spdlog::sinks::daily_file_sink_mt>("logs/log.txt",0,0);
        file_->set_level((spdlog::level::level_enum)file_level);

        file_err_ = std::make_shared<spdlog::sinks::daily_file_sink_mt>("logs/log_err.txt",0,0);
        file_err_->set_level((spdlog::level::level_enum)file_level);

        spdlog::sinks_init_list sinks = {console_, file_, file_err_};
        logger_ = std::make_shared<spdlog::logger>("applog", sinks);
        logger_->set_pattern("[%Y-%m-%d %T.%e] %^[%-8l]%$ [%t] %v");

        refresh_min_level();
        return 0;
    }
    int32_t deinit() {
        if (logger_){
            logger_->flush();
            logger_->sinks().clear();
        }
        logger_ = nullptr;
        return 0;
    }

    int32_t set_level(Level level){
        logger_->set_level(static_cast<spdlog::level::level_enum>(level));
        return 0;
    }

    int32_t enable_file_log(const char *path, int32_t max_size, uint8_t max_files)
    {
        // logger_->sinks().clear();
        // file_ = std::make_shared<spdlog::sinks::daily_file_sink_mt>("logs/log.txt",0,0);
        // file_->set_level(spdlog::level::debug);

        // file_err_ = std::make_shared<spdlog::sinks::daily_file_sink_mt>("logs/log_err.txt",0,0);
        // file_err_->set_level(spdlog::level::err);

        // refresh_min_level();
        return 0;
    }

    int32_t disable_file_log(){
        if(file_){
            file_->set_level(spdlog::level::off);
        }
        if(file_err_){
            file_err_->set_level(spdlog::level::off);
        }
        refresh_min_level();

        return 0;
    }

    Level level(){
        return (Level)logger_->level();
    }
private:
    void refresh_min_level(){
        spdlog::level::level_enum min_level = spdlog::level::critical;
        for (const auto& sink : logger_->sinks()) {
            if (sink->level() < min_level) {
                min_level = sink->level();
            }
        }
        logger_->set_level(min_level);
    }
private:
    std::shared_ptr<spdlog::logger> logger_;
    std::shared_ptr<spdlog::sinks::stdout_color_sink_mt> console_;
    std::shared_ptr<spdlog::sinks::daily_file_sink_mt> file_;
    std::shared_ptr<spdlog::sinks::daily_file_sink_mt> file_err_;
};

#define MR_TRACE(format, ...)       SPDLOG_LOGGER_TRACE(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_DEBUG(format,  ...)      SPDLOG_LOGGER_DEBUG(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_INFO(format,  ...)       SPDLOG_LOGGER_INFO(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_WARN(format,  ...)       SPDLOG_LOGGER_WARN(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_ERROR(format,  ...)      SPDLOG_LOGGER_ERROR(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_CRITICAL(format,  ...)   SPDLOG_LOGGER_CRITICAL(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_FATAL(format,  ...)      SPDLOG_LOGGER_CRITICAL(Logger::instance().logger(), format, ##__VA_ARGS__);

#define MR_TRACE_MORE(  format,  ...)     SPDLOG_LOGGER_TRACE(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_DEBUG_MORE(  format,  ...)     SPDLOG_LOGGER_DEBUG(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_INFO_MORE(  format,  ...)      SPDLOG_LOGGER_INFO(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_WARN_MORE(  format,  ...)      SPDLOG_LOGGER_WARN(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_ERROR_MORE(  format,  ...)     SPDLOG_LOGGER_ERROR(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_CRITICAL_MORE(  ...)  SPDLOG_LOGGER_CRITICAL(Logger::instance().logger(), format, ##__VA_ARGS__);
#define MR_FATAL_MORE(  format,  ...)     SPDLOG_LOGGER_CRITICAL(Logger::instance().logger(), format, ##__VA_ARGS__);


#define MR_LOG(L, format, ...) SPDLOG_LOGGER_CALL(Logger::instance().logger(), (spdlog::level::level_enum)L, format, ##__VA_ARGS__);
//#define MR_LOG_DEAULT(  format, ...) SPDLOG_LOGGER_CALL(Logger::instance().logger(),(spdlog::level::level_enum)Logger::instance().level(), format, ##__VA_ARGS__);
#define MR_LOG_MORE(L, format, ...) SPDLOG_LOGGER_CALL(Logger::instance().logger(), (spdlog::level::level_enum)L, format,  ##__VA_ARGS__);

#define MR_CHECK_TRACE(call, format,  ...)  { auto result = (call); if(result < 0){ MR_TRACE( format, ##__VA_ARGS__) } }
#define MR_CHECK_DEBUG(call,  format, ...)  { auto result = (call); if(result < 0){ MR_DEBUG( format, ##__VA_ARGS__) } }
#define MR_CHECK_INFO(call,  format, ...)   { auto result = (call); if(result < 0){ MR_INFO( format, ##__VA_ARGS__) } }
#define MR_CHECK_WARN(call,  format, ...)   { auto result = (call); if(result < 0){ MR_WARN( format, ##__VA_ARGS__) } }
#define MR_CHECK_ERROR(call,  format, ...)  { auto result = (call); if(result < 0){ MR_ERROR( format, ##__VA_ARGS__) } }
#define MR_CHECK_CRITICAL(call,  format, ...)  { auto result = (call); if(result < 0){ MR_CRITICAL( format, ##__VA_ARGS__) } }
#define MR_CHECK_FATAL(call,  format, ...)  { auto result = (call); if(result < 0){ MR_FATAL( format, ##__VA_ARGS__) } }


#define MR_CHECK_TRACE_BOOL(call,  format, ...) { auto result = (call); if(!result){ MR_TRACE( format, ##__VA_ARGS__) } }
#define MR_CHECK_DEBUG_BOOL(call,  format, ...) { auto result = (call); if(!result){ MR_DEBUG( format, ##__VA_ARGS__) } }
#define MR_CHECK_INFO_BOOL(call,  format, ...)  { auto result = (call); if(!result){ MR_INFO( format, ##__VA_ARGS__) } }
#define MR_CHECK_WARN_BOOL(call,  format, ...)  { auto result = (call); if(!result){ MR_WARN( format, ##__VA_ARGS__) } }
#define MR_CHECK_ERROR_BOOL(call,  format, ...) { auto result = (call); if(!result){ MR_ERROR( format, ##__VA_ARGS__) } }
#define MR_CHECK_CRITICAL_BOOL(call,  format, ...) { auto result = (call); if(!result){ MR_CRITICAL( format, ##__VA_ARGS__) } }
#define MR_CHECK_FATAL_BOOL(call,  format, ...) { auto result = (call); if(!result){ MR_FATAL( format, ##__VA_ARGS__) } }


static inline long high_resolution_clock_get_elapsed_and_reset(std::chrono::high_resolution_clock::time_point &clock)
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

#endif //LOGGER_H
