#include <iostream>
#include "Box.h"
using namespace std;

int main() {
  Box box1;
  cout << "volumn of box1 = " << box1.volumn() << endl;

  Box box2(2.0, 3.0, 5.0);
  cout << "volumn of box2 = " << box2.volumn() << endl;
}
