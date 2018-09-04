#include "LogStream.h"

namespace jlog {

LogStream::LogStream(const std::string& filename):of_() {
    of_.open(filename.c_str(), std::ios_base::app);
}
LogStream::~LogStream() {
    of_.close();
}

template<int Size>
inline void LogStream::flushLog(std::unique_ptr<Buffer<Size> > &pBuffer) {    
    of_ << pBuffer.get();
    of_.flush();
}

}