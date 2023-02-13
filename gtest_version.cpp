
#include "lib.h"
#include <gtest/gtest.h>

// Demonstrate some basic assertions.
TEST(TestGroup, test_version) {
  EXPECT_TRUE(version() > 0);
}