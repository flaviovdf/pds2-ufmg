#include <iostream>

void f(int &v) {
  v = 1;
}

int main() {
  int *v = new int;
  f(*v);
  delete v;
}
