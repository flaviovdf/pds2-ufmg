#include <iostream>
void funcao(int &ref) {
  std::cout << ref << std::endl;
  ref = ref + 1;
  // *ptr = *ptr + 1;
}
int main() {
  int x = 7;
  std::cout << &x << std::endl;
  int y = 7;
  std::cout << &y << std::endl;
  funcao(x);
  std::cout << x << std::endl;
  std::cout << y << std::endl;
  return 0;
}