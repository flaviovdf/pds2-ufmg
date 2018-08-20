#include <iostream>

int function(int& f) {
  f=f+3;
  return f;
}

int main() {
  int x = 7;
  int y;
  y = function(x);
  x++;
  y--;
  return 0;
}
