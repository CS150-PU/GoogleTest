#include <gtest/gtest.h>

#include "../include/Rectangle.h"

TEST (RectangleTest, setLength) {
  Rectangle rect;
  rect.setLength (10);
  EXPECT_EQ (10, rect.getLength ());
}