cmake_minimum_required(VERSION 3.29)
project(pat1003 LANGUAGES CXX)

add_executable(pat1003 pat1003.cpp)
target_compile_features(pat1003 PRIVATE cxx_std_20)
