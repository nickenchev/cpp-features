# Address Sanitizer
add_executable(addresssanitizer main.cpp)

target_compile_options(addresssanitizer PRIVATE -fsanitize=address)
target_link_options(addresssanitizer PRIVATE -fsanitize=address)
