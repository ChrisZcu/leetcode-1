# header begin
cmake_minimum_required(VERSION 3.10.2)
project(leetcode_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -O0")

include_directories(./third_party)
include_directories(./includes)
include_directories(./source)
include_directories(./test)

set(LEETCODE_NUMBER 1)
MESSAGE(${LEETCODE_NUMBER})
add_executable(${PROJECT_NAME}
        ./includes/catch_main.hpp
        ./source/leetcode_${LEETCODE_NUMBER}_.hpp
        ./test/leetcode_test_${LEETCODE_NUMBER}_.cpp
        )

