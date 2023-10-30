#include <gtest/gtest.h>

#include <fib.h>

using fib::ops::Fib;

TEST(Fib, Fib0) {
  EXPECT_EQ(Fib(0), 0);
}

TEST(Fib, Fib5) {
  EXPECT_EQ(Fib(5), 5);
}
