cmake_minimum_required(VERSION 3.10)

project(BinaryTreeVisualizer)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

add_executable(binary_tree src/main.cpp src/binary_tree.cpp)
add_executable(test_binary_tree test.cpp src/binary_tree.cpp)