#ifndef JLOG_H
#define JLOG_H
#include "Logger.h"
namespace jlog {
    void saveMessage() {
        
    }
}

#define LOG(level) jlog::Logger(__FILE__, __LINE__, __FUNCTION__, level);

#endif