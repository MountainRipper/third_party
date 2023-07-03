#include <cstdarg>
#include <spdlog/spdlog.h>
#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/fmt/bundled/printf.h>
#include <spdlog/fmt/bundled/color.h>
#include <logger.h>

//namespace mountain-ripper
namespace mr {

class LoggerInstance{
  public:
    static LoggerInstance& get(){
        static LoggerInstance logger_instance_;
        return logger_instance_;
    }

    LoggerInstance(){        
        //use different logger, so that the pattern can set only once
        //https://chrisyeh96.github.io/2020/03/28/terminal-colors.html
        /*
        Parameter	Effect
        0	        reset all SGR effects to their default
        1	        bold or increased intensity
        2	        faint or decreased intensity
        4	        singly underlined
        5	        slow blink
        30-37	    foreground color (8 colors)
        38;5;x	    foreground color (256 colors, non-standard)
        38;2;r;g;b	foreground color (RGB, non-standard)
        40-47	    background color (8 colors)
        48;5;x	    background color (256 colors, non-standard)
        48;2;r;g;b	background color (RGB, non-standard)
        90-97	    bright foreground color (non-standard)
        100-107	    bright background color (non-standard)
        */
        trace_logger_ = spdlog::stdout_color_mt("console-trace");
        trace_logger_->set_pattern("[%l %T.%e tid:%t] %v");

        debug_logger_ = spdlog::stdout_color_mt("console-debug");
        debug_logger_->set_pattern("\x1b[38;2;0;170;153m[%l %T.%e tid:%t] %v\x1b[0m");

        info_logger_ = spdlog::stdout_color_mt("console-info");
        info_logger_->set_pattern("\x1b[38;2;0;102;255m[%l %T.%e tid:%t] %v\x1b[0m");

        warn_logger_ = spdlog::stderr_color_mt("console-warn");
        warn_logger_->set_pattern("\x1b[38;2;255;102;0m[%l %T.%e tid:%t] %v\x1b[0m");

        error_logger_ = spdlog::stderr_color_mt("console-error");
        error_logger_->set_pattern("\x1b[38;2;255;0;0m[%l %T.%e tid:%t] %v\x1b[0m");

        critical_logger_ = spdlog::stderr_color_mt("console-critical");
        critical_logger_->set_pattern("\x1b[1;5;38;2;255;255;255;48;2;255;0;0m[%l %T.%e tid:%t] %v\x1b[0m");

        loggers_.push_back(trace_logger_);
        loggers_.push_back(debug_logger_);
        loggers_.push_back(info_logger_);
        loggers_.push_back(warn_logger_);
        loggers_.push_back(error_logger_);
        loggers_.push_back(critical_logger_);

        set_level(level_current_);
    }

    void set_level(spdlog::level::level_enum level){
        for(auto logger : loggers_){
            logger->set_level(level);
        }
        level_current_ = level;
    }

    void enable_file_log(const char* path,int32_t max_size,uint8_t max_files){
        if(!file_logger_){
            file_logger_ = spdlog::rotating_logger_mt("file-logger", path, max_size, max_files,true);
            file_logger_->set_pattern("[%l %T.%e tid:%t] %v");
            file_logger_->flush_on(spdlog::level::warn);
            loggers_.push_back(file_logger_);
        }
        file_logger_->set_level(level_current_);
    }
    void disable_file_log(){
        if(file_logger_)
            file_logger_->set_level(spdlog::level::off);
    }
public:
    std::shared_ptr<spdlog::logger> trace_logger_;
    std::shared_ptr<spdlog::logger> debug_logger_;
    std::shared_ptr<spdlog::logger> info_logger_;
    std::shared_ptr<spdlog::logger> warn_logger_;
    std::shared_ptr<spdlog::logger> error_logger_;
    std::shared_ptr<spdlog::logger> critical_logger_;

    std::shared_ptr<spdlog::logger> file_logger_;

    std::vector<std::shared_ptr<spdlog::logger>> loggers_;

    spdlog::level::level_enum level_current_ = spdlog::level::info;
};



void Logger::set_level(Logger::LogLevel level)
{
    auto& logger_instance = LoggerInstance::get();
    logger_instance.set_level(static_cast<spdlog::level::level_enum>(level));
}

void Logger::enable_file_log(const char *path, int32_t max_size, uint8_t max_files)
{
    auto& logger_instance = LoggerInstance::get();
    logger_instance.enable_file_log(path,max_size,max_files);
}

void Logger::disable_file_log()
{
    auto& logger_instance = LoggerInstance::get();
    logger_instance.disable_file_log();
}

void Logger::log_simple(Logger::LogLevel level, const char *log) {
    auto level_enum = static_cast<spdlog::level::level_enum>(level);
    auto& logger_instance = LoggerInstance::get();
    logger_instance.loggers_[level]->log(level_enum,log);
    if(logger_instance.file_logger_)
        logger_instance.file_logger_->log(level_enum,log);
}

void Logger::log(Logger::LogLevel level, const char *log) {
    auto level_enum = static_cast<spdlog::level::level_enum>(level);
    auto& logger_instance = LoggerInstance::get();
    logger_instance.loggers_[level]->log(level_enum,log);
    if(logger_instance.file_logger_)
        logger_instance.file_logger_->log(level_enum,log);
}


}//namespace mountain-ripper
