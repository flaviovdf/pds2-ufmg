#include <iostream>

void f(int &y) {
  y = y + 2;
}

int main() {
  int x = 9;
  std::cout << x << std::endl;
  f(x);
  std::cout << x << std::endl;
  return 0;
}