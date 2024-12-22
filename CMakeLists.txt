cmake_minimum_required(VERSION 3.9)
project(DemoForGTest)
set(CMAKE_CXX_STANDARD 17)
# 'Google_test' is the subproject name
# 'lib' is the folder with Google Test sources
add_subdirectory(cmake-build-debug/googletest-main_副本)
add_subdirectory(Test)
# 'Google_Tests_run' is the target name
# 'test1.cpp test2.cpp' are source files with tests
add_executable(Google_Tests_run main.cpp )
target_link_libraries(Google_Tests_run gtest gtest_main)
enable_testing()
add_test(NAME Google_Tests_run COMMAND Google_Tests_run)
