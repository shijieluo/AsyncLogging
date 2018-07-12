#include "Buffer.h"
#include <cstring>
template <int Size>
void Buffer<Size>::append(char* logLine, int len) {
    if(len > leftSize()) return;
    char *cur = getCurDataPtr();
    memcpy(cur, logLine, len);
    add(len);
}