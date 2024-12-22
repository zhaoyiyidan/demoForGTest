add_executable(addtest  test.cpp)
target_link_libraries(addtest gtest gtest_main)
enable_testing()
add_test(NAME that-test-I-made COMMAND addtest)