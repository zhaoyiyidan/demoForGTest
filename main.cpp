#include <iostream>
#include "gtest/gtest.h"
int Factorial(int n){
    return n <= 1 ? 1 : n * Factorial(n - 1);
}
// Tests factorial of 0.
TEST(FactorialTest, HandlesZeroInput) {
    EXPECT_EQ(Factorial(0), 1);
}
// Tests factorial of positive numbers.
TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(Factorial(1), 1);
    EXPECT_EQ(Factorial(2), 2);
    EXPECT_EQ(Factorial(3), 6);
    EXPECT_EQ(Factorial(8), 40320);
}
class FooTest:public testing::Test{
protected:
};
TEST_F(FooTest,Test1){
    EXPECT_EQ(1,1);
}
// problem here I can not run individual test cases
// 1.add include(CTest) does not work
// 2.use cmake 3.9 does not work
// 3.use ctest does not work
// 4.use enable_testing() does not work
// i need to learn cmake to fix it,but it is not a big deal
// there is something stange , if i have used TestF , then i do it seperately.