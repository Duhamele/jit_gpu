cmake_minimum_required(VERSION 3.28 FATAL_ERROR)


project(JIT_GPU)
enable_language(CXX)

include_directories(BEFORE include)
add_subdirectory(src)


add_subdirectory(test)

