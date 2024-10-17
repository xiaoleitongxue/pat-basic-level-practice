cmake_minimum_required(VERSION 3.29)
project(pat1001 LANGUAGES CXX)

add_executable(pat1002 pat1002.cpp)
target_compile_features(pat1002 PRIVATE cxx_std_20)