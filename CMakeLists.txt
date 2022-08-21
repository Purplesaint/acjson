cmake_minimum_required(VERSION 3.0.0)
project(easy_log VERSION 0.1.0)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)

add_executable(acjson_test)

target_include_directories(
    acjson_test PRIVATE
    src/
)

target_sources(acjson_test PRIVATE
    src/json.h
    src/json.cpp
    )

# include(CTest)
# enable_testing()
# add_subdirectory(third_party/google_test)
# include_directories(third_party/google_test/googletest/include)
