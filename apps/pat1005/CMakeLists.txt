cmake_minimum_required(VERSION 3.29)
project(pat1005 LANGUAGES CXX)

add_executable(pat1005 pat1005.cpp)
target_compile_features(pat1005 PRIVATE cxx_std_20)
