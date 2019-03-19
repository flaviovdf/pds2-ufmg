#include <iostream>

int *f() {
  int rv[20];
  return rv;
}

int main() {
  f();
}
