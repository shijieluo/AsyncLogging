#include "LogStream.h"

namespace jlog {

LogStream::LogStream(const std::string& filename):of_() {
    of_.open(filename.c_str(), std::ofstream::out | std::ofstream::app);
}
LogStream::~LogStream() {
    of_.close();
}

}