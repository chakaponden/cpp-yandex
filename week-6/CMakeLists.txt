cmake_minimum_required(VERSION 3.0)
cmake_policy(SET CMP0048 NEW)

set(PROJECT yellow-week-6)

project(${PROJECT}
        VERSION 0.0.1)

# c++11
set(CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -std=c++11")

file(GLOB SOURCES
    src/*.h
    src/*.cpp
    src/*.hpp
)
add_executable(${PROJECT} ${SOURCES})

# name target executable with version
# set_target_properties(${PROJECT} PROPERTIES OUTPUT_NAME ${PROJECT}-${PROJECT_VERSION})
