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

}
#endif