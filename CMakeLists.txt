cmake_minimum_required(VERSION 3.30)

SET(CMAKE_OSX_ARCHITECTURES "arm64" CACHE STRING "Build architectures for Mac OS X" FORCE)

project(algorithms)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories("${CMAKE_SOURCE_DIR}/cmd/headers")

file(GLOB_RECURSE SOURCE_FILES cmd/*.cpp src/headers/*.hpp)

add_executable(algorithms ${SOURCE_FILES})

set_target_properties(algorithms PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/dist")
