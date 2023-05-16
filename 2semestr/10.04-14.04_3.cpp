#include <iostream>

using namespace std;

class AdHocSquare {
public:
  AdHocSquare(double side);
  void set_side(double side);
  double get_area();

private:
  double side;
};

AdHocSquare::AdHocSquare(double side) {
  set_side(side);
}

void AdHocSquare::set_side(double side) {
  this->side = side;
}

double AdHocSquare::get_area() {
  return side * side;
}

class LazySquare {
public:
  LazySquare(double side);
  void set_side(double side);
  double get_area();

private:
  double side;
  double area;
  bool side_changed;
};

LazySquare::LazySquare(double side) {
  set_side(side);
}

void LazySquare::set_side(double side) {
  if (this->side != side) {
    this->side = side;
    side_changed = true;
  }
}

double LazySquare::get_area() {
  if (side_changed) {
    area = side * side;
    side_changed = false;
  }
  return area;
}

int main() {
  AdHocSquare adhoc(4);
  cout << "AdHocSquare: area=" << adhoc.get_area() << endl;
  adhoc.set_side(2.0);
  cout << "AdHocSquare: area=" << adhoc.get_area() << endl;
  adhoc.set_side(-33.0);
  cout << "AdHocSquare: area=" << adhoc.get_area() << endl;

  LazySquare lazy(4);
  cout << "LazySquare: area=" << lazy.get_area() << endl;
  lazy.set_side(2.0);
  cout << "LazySquare: area=" << lazy.get_area() << endl;
  lazy.set_side(-33.0);
  cout << "LazySquare: area=" << lazy.get_area() << endl;

  return 0;
}