#include "Buffer.h"
#include <cstring>
template <class Size>
void Buffer::append(char* logLine, int len) {
    if(len > leftSize()) return;
    char *cur = getCurDataPtr();
    memcpy(cur, logLine, len);
}