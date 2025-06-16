cmake_minimum_required(VERSION 3.10)
project(TVSJupiterBuilderDemo)

set(CMAKE_CXX_STANDARD 20)

add_executable(TVSJupiterBuilderDemo main.cpp)

target_include_directories(TVSJupiterBuilderDemo PRIVATE
    bike
    bikeBuilder
)