//
// Created by 赵鲲翔 on 2024/12/21.
//

#ifndef DEMOFORGTEST_TEST_H
#define DEMOFORGTEST_TEST_H

#include "../a.h"
#include "gtest/gtest.h"

TEST(AddTest, HandlesZeroInput) {
    EXPECT_EQ(add(0, 0), 0);
}
class SubTest:public testing::Test{
protected:
    // You can remove any or all of the following functions if its body
    // is empty.
    SubTest() {
        // You can do set-up work for each test here.
    }
};

#endif //DEMOFORGTEST_TEST_H
