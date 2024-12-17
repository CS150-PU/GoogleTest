#include <iostream>
#include "../include/Calculator.h"

using namespace std;

int Calculator::add (int a, int b) {
  return a + b;
}

int Calculator::subtract (int a, int b) {
  return a - b;
}

int Calculator::multiply (int a, int b) {
  return a * b;
}

double Calculator::divide (int a, int b) {
  // error check
  if (b == 0) {
    cout << "Error: Division by zero" << endl;
    return 0;
  }
  return (double) a / b;
}