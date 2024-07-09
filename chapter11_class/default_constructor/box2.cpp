#include <iostream>

using namespace std;

class Box {
private:
  double length = 1.0;
  double width = 1.0;
  double height = 1.0;

public:
  Box() {
    // do nothing
  }

  double volumn() {
    return length * width * height;
  }
};

int main() {
  Box myBox;
  cout << "volumn of myBox = " << myBox.volumn() << endl;
}
