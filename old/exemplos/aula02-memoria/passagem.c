#include <stdio.h>

void f(int *x, int y) {
  int z = 2;
  *x += y + z;
}

int main() {
  int x = 9;
  printf("x = %d\n", x);
  f(&x, 10);
  printf("x = %d\n", x);
}
