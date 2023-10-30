#include <gtest/gtest.h>

#include <my/utils.h>

using my::utils::itoa;

TEST(utils, itoa10) {
  EXPECT_EQ(itoa(10), "10");
}

TEST(utils, itoa100) {
  EXPECT_EQ(itoa(100), "100");
}
