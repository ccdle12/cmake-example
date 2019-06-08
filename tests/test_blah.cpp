#include <gtest/gtest.h>
#include "blah/blah.h"

TEST(TestBlah, OutputTest) {
  EXPECT_EQ(2, Sum(1, 1));
}
