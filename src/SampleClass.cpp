#include <iostream>
#include "../include/SampleClass.h"

using namespace std;

int SampleClass::add (int a, int b) {
  return a + b;
}

int SampleClass::subtract (int a, int b) {
  return a - b;
}

int SampleClass::multiply (int a, int b) {
  return a * b;
}

double SampleClass::divide (int a, int b) {
  // error check
  if (b == 0) {
    cout << "Error: Division by zero" << endl;
    return 0;
  }
  return (double) a / b;
}