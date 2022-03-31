#include <iostream>

struct ponto_t {
  double x;
  double y;
};

int main() {
  ponto_t ponto;
  ponto.x = 7;
  ponto.y = 9;
  std::cout << ponto.x << std::endl;
  std::cout << ponto.y << std::endl;
  return 0;
}
