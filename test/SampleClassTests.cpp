#include <gtest/gtest.h>

#include "../include/SampleClass.h"

TEST (SampleClassTest, add) {
  SampleClass calc;
  EXPECT_EQ (7, calc.add (3, 4));
}

TEST (SampleClassTest, subtract) {
  SampleClass calc;
  EXPECT_EQ (-1, calc.subtract (3, 4));
}

TEST (SampleClassTest, multiply) {
  SampleClass calc;
  EXPECT_EQ (12, calc.multiply (3, 4));
}

TEST (SampleClassTest, divide) {
  SampleClass calc;
  EXPECT_EQ (2, calc.divide (8, 4));
}