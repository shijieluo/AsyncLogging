#include "jlog.h"
#include <unistd.h>

int main(int argc, char** argv) {
    jlog::AsyncLogging alog("test.log");
    jlog::setDefaultLogInstance(&alog);
    alog.initializeLogging();
    sleep(5);
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    LOG(INFO) << "jlog test.." << "..pretty logging system";
    
    while(1) {}
}