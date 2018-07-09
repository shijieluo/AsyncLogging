#ifndef BUFFER_H
#define BUFFER_H
#define SMALLBUFFER 4000
#define LARGEBUFFER 4000*1000
template<class Size>
class Buffer {
    public:
    Buffer():cur_(data){}
    ~Buffer();
    char *getCurData() {return cur_;}
    private:    
    char* cur_;
    char data[Size];        
};
#endif