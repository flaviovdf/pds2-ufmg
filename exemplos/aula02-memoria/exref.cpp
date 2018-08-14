#include <iostream>

int inc(int &x) {
  std::cout << x << std::endl;
  x = x + 1;
  return x;
}

int main() {
  int a = 10;
  std::cout << &a << std::endl;
  int b = inc(a);
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << &a << std::endl;
  std::cout << &b << std::endl;
}
