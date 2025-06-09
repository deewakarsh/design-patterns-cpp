cmake_minimum_required(VERSION 3.10)
project(CloudKitchenItem)

set(CMAKE_CXX_STANDARD 23)

add_executable(CloudKitchenItem main.cpp)

target_include_directories(CloudKitchenItem PRIVATE
    cloudKitchenFactory
    foodItem
)