cmake_minimum_required(VERSION 3.15)
project(MergeSortLists C)

set(CMAKE_C_STANDARD 99)

add_executable(MergeSortLists main.c MergeList.h MergeList.c)