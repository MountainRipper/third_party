#ifndef LOGGER_H
#define LOGGER_H

#include"easylogging++.h"

extern el::Logger* default_logger;

#define LOG_INIT \
{\
el::Configurations defaultConf;\
defaultConf.setToDefault();\
defaultConf.setGlobally(el::ConfigurationType::Format, "%datetime %level %msg");\
el::Loggers::reconfigureLogger("default", defaultConf);\
default_logger = el::Loggers::getLogger("default");\
}

#define LOG_TRACE(FORMAT, ...) default_logger->trace(FORMAT,##__VA_ARGS__)
#define LOG_DEBUG(FORMAT, ...) default_logger->debug(FORMAT,##__VA_ARGS__)
#define LOG_INFO(FORMAT, ...) default_logger->info(FORMAT,##__VA_ARGS__)
#define LOG_WARN(FORMAT, ...) default_logger->warn(FORMAT,##__VA_ARGS__)
#define LOG_ERROR(FORMAT, ...) default_logger->error(FORMAT,##__VA_ARGS__)
#define LOG_FATAL(FORMAT, ...) default_logger->fatal(FORMAT,##__VA_ARGS__)

#endif // LOGGER_H
