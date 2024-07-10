#include <iostream>

using namespace std;

class Box {
private:
  double length = 1.0;
  double width = 1.0;
  double height = 1.0;

public:
  Box() = default;
  Box(double len, double w, double h) {
    length = len;
    width = w;
    height = h;
  }

  double volumn() {
    return length * width * height;
  }
};

int main() {
  Box box1;
  cout << "volumn of box1 = " << box1.volumn() << endl;

  Box box2(2.0, 3.0, 5.0);
  cout << "volumn of box2 = " << box2.volumn() << endl;
}
