cmake_minimum_required(VERSION 3.2)
project(cppfeatures CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_EXPORT_COMPILE_COMMANDS on)

add_subdirectory(src/address-sanitizer)
add_subdirectory(src/valgrind/memcheck)
add_subdirectory(src/clang-tidy)
add_subdirectory(src/ifconstexpr)
add_subdirectory(src/aggregate-init)
add_subdirectory(src/array)
