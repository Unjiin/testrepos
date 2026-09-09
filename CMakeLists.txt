cmake_minimum_required(VERSION 3.20)
project(GitHomework)

set(CMAKE_CXX_STANDARD 17)

# Основная программа
add_executable(GitHomework
        main.cpp
        Triangle.cpp
)

# GoogleTest
include(FetchContent)

FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

enable_testing()

# Отдельный исполняемый файл с тестами
add_executable(TriangleTests
        tests.cpp
        Triangle.cpp
)

target_link_libraries(
        TriangleTests
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(TriangleTests)
