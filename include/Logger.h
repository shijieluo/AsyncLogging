#ifndef LOGGER_H
#define LOGGER_H
#include <iostream>
#include <sstream>
#include "LogLevel.h"

namespace jlog {

    struct Logger {        
        Logger(const char *file, const int line, const char *function, LEVEL level);
        virtual ~Logger();
        std::ostringstream& stream() {return &os_};        
        std::ostringstream os_;
        const char *file_;
        const int line_;
        const char *function_;
        LEVEL level_;  
         
    };



}





#endif