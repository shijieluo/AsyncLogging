#include "jlog.h"
#include "AsyncLogging.h"
#include <chrono>
#include <ctime>


namespace jlog {
    
    AsyncLogging* jlog_g_log_instance = NULL;

    void setDefaultLogInstance(AsyncLogging* logCore) {
        jlog_g_log_instance = logCore;
    }

    std::string addLogHeader() {    
        std::string format_time;
        auto time = std::chrono::system_clock::now();
        auto tm_t = std::chrono::system_clock::to_time_t(time);
        format_time = ctime(&tm_t);
        return format_time.assign(format_time.begin(), format_time.end()-1);
    }

    std::string getLevelString(LEVEL level) {
        std::string levelString;
        switch(level) {
            case 0: levelString = "DEBUG";break;
            case 1: levelString = "INFO";break;
            case 2: levelString = "WARN";break;
            case 3: levelString = "ERROR";break;
            case 4: levelString = "FATAL";break;
            default: levelString = "FATAL";break;
        }
        return levelString;
    }

    inline AsyncLogging* getLogInstance() {return jlog_g_log_instance;}  

    void saveMessage(const std::string& logmessage, const char* file, const int line, const char* function, LEVEL level) {
        std::ostringstream full_message;
        std::string levelString = getLevelString(level);
        full_message << "[" << addLogHeader() << "] " << "["<< file << "] " << "[line: " << line << "] " << "[function: " << function << "] " << levelString << " " << logmessage << "\n";        
        getLogInstance()->append(const_cast<char*>(full_message.str().c_str()), full_message.str().size());
    }
}
