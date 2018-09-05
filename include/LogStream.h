#ifndef LOGSTREAM_H
#define LOGSTREAM_H
#include <iostream>
#include <fstream>
#include <memory>
#include <string>
#include "Buffer.h"


namespace jlog {

class LogStream {
    public:
    LogStream(const std::string& filename);   
    ~LogStream();
    template<int Size>
    void flushLog(std::unique_ptr<Buffer<Size> > &pBuffer);
    //void writeLog();
    private:
    std::ofstream of_;
};

template<int Size>
inline void LogStream::flushLog(std::unique_ptr<Buffer<Size>> &pBuffer) {    
    of_ << pBuffer->getBuffer();
    std::cout << "flush logmessage:" << pBuffer->getBuffer()<< std::endl;
    of_.flush();
}


}
#endif