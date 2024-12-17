#include <gtest/gtest.h>

#include "../include/Calculator.h"

TEST (CalculatorTest, add) {
  Calculator calc;
  EXPECT_EQ (7, calc.add (3, 4));
}

TEST (CalculatorTest, subtract) {
  Calculator calc;
  EXPECT_EQ (-1, calc.subtract (3, 4));
}

TEST (CalculatorTest, multiply) {
  Calculator calc;
  EXPECT_EQ (12, calc.multiply (3, 4));
}

TEST (CalculatorTest, divide) {
  Calculator calc;
  EXPECT_EQ (2, calc.divide (8, 4));
}