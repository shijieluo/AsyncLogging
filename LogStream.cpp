#include "LogStream.h"

LogStream::LogStream(char* filename):of_() {
    of_.open(filename, std::ios_base::app);
}
LogStream::~LogStream() {
    of_.close();
}
