#include <iostream>

int inc(int *x) {
  *x = *x + 1;
  return *x;
}

int main() {
  int a = 10;
  std::cout << a << std::endl;
  int *b = &a;
  int c = inc(&a);
  std::cout << a << std::endl;
  std::cout << *b << std::endl;
  std::cout << c << std::endl;
}
