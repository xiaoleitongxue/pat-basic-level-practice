cmake_minimum_required(VERSION 3.29)
project(pat1004 LANGUAGES CXX)

add_executable(pat1004 pat1004.cpp)
target_compile_features(pat1004 PRIVATE cxx_std_20)
