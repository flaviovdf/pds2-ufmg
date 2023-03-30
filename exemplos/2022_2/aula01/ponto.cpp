// #include <cmath>
#include <iostream>

class Ponto {
  private:
    double _x;
    double _y;
  public:
    Ponto(double x, double y) {
      _x = x;
      _y = y;
    }
    // double modulo() {
    //   return sqrt(_x * _x + _y * _y);  
    // }
    double get_x() {
      return _x;
    }
};

using namespace std;

int main() {
  Ponto ponto = Ponto(3, 2);
  double x = ponto.get_x();
  x++;
  cout << x << endl;
  cout << ponto.get_x() << endl;
  // Ponto ponto2 = Ponto(0, 0);
  // cout << ponto2.modulo();
  
  // Ponto ponto3 = Ponto(3, 2);
  // cout << ponto3.modulo();
  
  return 0;  
}