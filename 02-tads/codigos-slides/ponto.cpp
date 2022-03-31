#include <cmath>
#include <iostream>
#include <string>

struct Ponto {

  // Dados
  private:
    double _x_val;
    double _y_val;

  public:
    // Operacoes
    // 1. Construtor
    Ponto(double x_val, double y_val) {
      _x_val = x_val;
      _y_val = y_val;
    }

    // 2. Translado
    void translado(Ponto &outro) {
      _x_val += outro._x_val;
      _y_val += outro._y_val;
    }

    // 3. Rotaciona
    void rotaciona(double theta) {
      double x_antigo = _x_val;
      double y_antigo = _y_val;
      _x_val = x_antigo * cos(theta) - y_antigo * sin(theta);
      _y_val = x_antigo * sin(theta) + y_antigo * cos(theta);
    }

    void imprime() {
      std::cout << "x= " << _x_val << " y= " << _y_val << std::endl;
    }
};

int main() {
  Ponto p1 = Ponto(2, 1);
  Ponto p2(2, 3);

  p1.imprime();
  p1.rotaciona(90);
  p1.imprime();

  p1.translado(p2);
  p1.imprime();

  Ponto *p3 = new Ponto(9, 9);
  p3->imprime();

  Ponto &p4 = p1;
  p4.translado(p2);
  p4.imprime();
  p1.imprime();

  return 0;
}
