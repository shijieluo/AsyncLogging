#ifndef JLOG_H
#define JLOG_H
#include "Logger.h"
#include <iostream>
#include <sstream>
#include "LogLevel.h"
#include "AsyncLogging.h"

namespace jlog {       

    void saveMessage(const std::string& logmessage, const char* file, const int line, const char* function, LEVEL level);

    std::string addLogHeader();

    std::string getLevelString(LEVEL level);

    void setDefaultLogInstance(AsyncLogging* logCore);

    inline AsyncLogging* getLogInstance();  
}

#define LOG(level) jlog::Logger(__FILE__, __LINE__, __FUNCTION__, level).stream()

#endif