#include <iostream>
#include "Logger.h"
#include "jlog.h"

namespace jlog {
    Logger::Logger(const char *file, const int line, const char *function, LEVEL level):
    file_(file),
    line_(line),
    function_(function),
    level_(level) {

    }

    Logger::~Logger() {
        saveMessage(os_.str(), file_, line_, function_, level_);
    }
    
}