#include <iostream>


void f(int &i) {
  std::cout << i << std::endl;
  i++;
}

int main(void) {
  int *int_ptr = new int;
  *int_ptr = 9;
  std::cout << *int_ptr << std::endl;
  f(*int_ptr);
  std::cout << *int_ptr << std::endl;
}
