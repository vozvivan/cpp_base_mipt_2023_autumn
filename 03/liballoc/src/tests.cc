#include <gtest/gtest.h>
#include "alloc.hpp"

// using namespace alc;

TEST(stmr, stmr0)
{
    alc::Allocator* alloc = alc::init_allocator(100);
    char* block1 = alc::alloc(alloc, 10);
    EXPECT_NE(block1, nullptr); // Memory allocation successful

    char* block2 = alc::alloc(alloc, 20);
    EXPECT_NE(block2, nullptr); // Memory allocation successful

    char* block3 = alc::alloc(alloc, 100);
    EXPECT_EQ(block3, nullptr); // Not enough memory available

    reset(alloc);

    char* block4 = alc::alloc(alloc, 50);
    EXPECT_NE(block4, nullptr); // Memory allocation successful

    clear(alloc);

}