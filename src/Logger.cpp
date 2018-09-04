#include "Logger.h"

namespace jlog {
    Logger::Logger(const char *file, const int line, const char *function, Level level):
    file_(file),
    line_(line),
    function_(function);
    level_(level);
}