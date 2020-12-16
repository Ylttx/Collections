#include "gtest/gtest.h"

// C++ 包含C文件记得extern "C"
extern "C" {
#include "../source/func.h"
}

TEST(func, add_positive) {
	EXPECT_EQ(5, add(2, 3));
}

TEST(func, add_negtive) {
	EXPECT_EQ(-5, add(-2, -3));
}

