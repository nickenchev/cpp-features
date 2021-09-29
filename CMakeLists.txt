cmake_minimum_required(VERSION 3.2)
project(cppfeatures CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_EXPORT_COMPILE_COMMANDS on)

# Variadic Templates
add_executable(variadictemplates
  src/variadictemplates.cpp)

# Address Sanitizer
add_executable(addresssanitizer
  src/addresssanitizer.cpp)

target_compile_options(addresssanitizer PRIVATE -fsanitize=address)
target_link_options(addresssanitizer PRIVATE -fsanitize=address)

# Constexpr If
add_executable(constexprif
  src/ifconstexpr/main.cpp)

