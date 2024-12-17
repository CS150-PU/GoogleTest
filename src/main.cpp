//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        xx/xx/xxxx (Replace xx/xx/xxxx with month/day/year)
// Class:       CS150-xx (Replace xx with your section number)
// Assignment:  Hello World
// Purpose:     Display the message Hello World to the screen
// Hours:       0.25
//******************************************************************************

#include <iostream>
#include "../include/Calculator.h"

using namespace std;


int main () {
  Calculator calc;
  int a = 10, b = 5;

  cout << "Addition: " << calc.add (a, b) << endl;
  cout << "Subtraction: " << calc.subtract (a, b) << endl;
  cout << "Multiplication: " << calc.multiply (a, b) << endl;
  cout << "Division: " << calc.divide (a, b) << endl;

  cout << "Hello World" << endl;

  return EXIT_SUCCESS;
}