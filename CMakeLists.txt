cmake_minimum_required (VERSION 3.1)
ENABLE_LANGUAGE(CXX)

if(NOT CMAKE_BUILD_TYPE AND NOT (MSVC_IDE OR XCODE))
  set(CMAKE_BUILD_TYPE Release CACHE STRING "Build type, one of: Release, Debug" FORCE)
endif()


project (AsyncLogging)

message( STATUS "Build type: ${CMAKE_BUILD_TYPE}" )
message( STATUS "Configuration types: ${CMAKE_CONFIGURATION_TYPES}" )

# Detect 64 or 32 bit
if (CMAKE_SIZEOF_VOID_P EQUAL 8)
   # 64-bit project
   SET(64_BIT_OS TRUE)
     message( STATUS "A 64-bit OS detected" )
 else()
   SET(64_BIT_OS FALSE)
   message( STATUS "A 32-bit OS detected" )
endif()

SET( CMAKE_CXX_COMPILER "g++" )
SET( CMAKE_BUILD_TYPE Release )
SET( CMAKE_CXX_FLAGS "-O3 -std=c++11" )

set(LOG_SRC ${AsyncLogging_SOURCE_DIR}/src)
set(LOG_INCLUDE ${AsyncLogging_SOURCE_DIR}/include)
set(LOG_TEST_SRC ${AsyncLogging_SOURCE_DIR}/src/tests)

file(GLOB SRC_FILES ${LOG_SRC}/*.cpp ${LOG_SRC}/*.cc)
file(GLOB HEADER_FILES ${LOG_INCLUDE}/*.h ${LOG_INCLUDE}/*.hpp)

set(AsyncLogging_Library jlog)
message(STATUS "src files:" ${SRC_FILES})
include_directories(${LOG_INCLUDE})
add_library(${AsyncLogging_Library} SHARED ${SRC_FILES} ${HEADER_FILES})
set_target_properties(${AsyncLogging_Library} PROPERTIES LINKER_LANGUAGE CXX)
#include_directories(${LOG_INCLUDE})
#add_executable(lock ${LOG_TEST_SRC}/lock.cpp ${HEADER_FILES})
#set_target_properties(lock PROPERTIES LINKER_LANGUAGE CXX)