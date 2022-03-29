#include <iostream>

class Ponto {
private:
  float _x;
  float _y;
public:
  Ponto(float x, float y) {
    _x = x;
    _y = y;
  }
  float get_x() {
    return _x;
  }
  float get_y() {
    return _y;
  }
  void translacao(double dx, double dy) {
    _x += dx;
    _y += dy;
  }
};

int main() {
  Ponto ponto(7, 3);
  std::cout << "Valor de x: " << ponto.get_x() << std::endl;
  std::cout << "Valor de y: " << ponto.get_y() << std::endl;
  ponto.translacao(3, 1);
  std::cout << "Valor de x: " << ponto.get_x() << std::endl;
  std::cout << "Valor de y: " << ponto.get_y() << std::endl;
}
