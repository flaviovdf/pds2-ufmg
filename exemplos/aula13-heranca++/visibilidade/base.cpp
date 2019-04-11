#include <iostream>

class Base {
protected:
  int i = 0;
};

class Derived : public Base {
public:
  void f() {
    i++;
  };
};

int main() {
  Derived d;
  d.i = 9;
}
