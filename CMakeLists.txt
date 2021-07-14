cmake_minimum_required(VERSION 3.19)
project(project_name)

set(CMAKE_CXX_STANDARD 98)

# this executable for simple RUN, and DEBUG
add_executable(your_project_name main.cpp example_func.cpp)

# this executable for google tests dont need adding main to this. Also u can RUN with coverage
add_executable(all_tests unit_tests/example_test.cpp example_func.cpp)


#for google tests
add_subdirectory(googletest)
include_directories(googletest/googletest/include)
include_directories(googletest/googlemock/include)
target_link_libraries(your_project_name gtest gtest_main)
target_link_libraries(all_tests gtest gtest_main gmock gmock_main)