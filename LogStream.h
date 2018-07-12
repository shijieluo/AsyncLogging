#ifndef LOGSTREAM_H
#define LOGSTREAM_H
#include <iostream>
#include <fstream>
#include <memory>
#include "Buffer.h"
//not thread safe
class LogStream {
    public:
    LogStream(char *filename);   
    ~LogStream();
    template<int Size>
    void flushLog(std::unique_ptr<Buffer<Size> > &pBuffer);
    //void writeLog();
    private:
    std::ofstream of_;
};
template<int Size>
void LogStream::flushLog(std::unique_ptr<Buffer<Size> > &pBuffer) {    
    of_ << pBuffer.get();
    of_.flush();
}
#endif