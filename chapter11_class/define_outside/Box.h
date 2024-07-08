#ifndef BOX_H
#define BOX_H

class Box {
private:
  double length = 1.0;
  double width = 1.0;
  double height = 1.0;

public:
  Box() = default;
  Box(double, double, double);
  double volumn();
};
#endif