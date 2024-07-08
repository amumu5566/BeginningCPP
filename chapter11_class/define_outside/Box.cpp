#include <iostream>
#include "Box.h"

Box::Box(double len, double w, double h) {
  length = len;
  width = w;
  height = h;
}

double Box::volumn() {
  return length * width * height;
}
