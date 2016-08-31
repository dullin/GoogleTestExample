//
// Created by Hugo Leblanc on 2016-08-25.
//
extern "C" {
#include <module1.h>
}
#include "gtest/gtest.h"

TEST(basic_check, test_eq) {
    EXPECT_EQ(1, 0);
}

TEST(basic_check, test_neq) {
    EXPECT_NE(1, 0);
}

TEST(basic_check, test_double_value){
    EXPECT_EQ(double_value(3,4),24);
}