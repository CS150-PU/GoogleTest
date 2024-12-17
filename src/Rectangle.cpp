#include <iostream>
#include "../include/Rectangle.h"

void Rectangle::setLength (double length) {
  mLength = length;
}

double Rectangle::getLength () const {
  return mLength;
}