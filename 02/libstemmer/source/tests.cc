#include "stemmer.hpp"
#include <gtest/gtest.h>

using stmr::normalize;

TEST(stmr, stmr0)
{
    EXPECT_EQ(normalize("using"), "US");
    EXPECT_EQ(normalize("rubins"), "RUBIN");
}
TEST(stmr, stmr1)
{
    EXPECT_EQ(normalize("rubins"), "RUBIN");
    EXPECT_EQ(normalize("Britney"), "BRITNEY");
}
TEST(stmr, stmr2)
{
    EXPECT_EQ(normalize("currently"), "CURRENT");
    EXPECT_EQ(normalize("fbhly"), "FBH");
    EXPECT_EQ(normalize("CEU9XN"), "error, it is not tocen");
    EXPECT_EQ(normalize("normalized"), "NORMALIZ");
}