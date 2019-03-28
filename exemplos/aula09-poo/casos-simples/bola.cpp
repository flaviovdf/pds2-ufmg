#include <iostream>
#include <string>

class Bola {
private:
  double _raio;
  double _peso;
  std::string _cor;
public:
  Bola(double raio_inicial, double peso_inicial,
       std::string cor_inicial) {
    _raio = raio_inicial;
    _peso = peso_inicial;
    _cor = cor_inicial;
  }
  std::string get_cor() {
    return _cor;
  }
  double get_raio() {
    return _raio;
  }
  bool seta_raio(double raio_novo) {
    if (raio_novo <= 0) {
      return false;
    }
    _raio = raio_novo;
    return true;
  }
};

int main() {
  Bola bola1(10, 5, "amarela");
  Bola bola2(50, 25, "azul");
  std::cout << bola1.get_raio() << std::endl;
  std::cout << bola2.get_raio() << std::endl;

  bola2.seta_raio(2);
  std::cout << bola1.get_raio() << std::endl;
  std::cout << bola2.get_raio() << std::endl;

  bola2.seta_raio(-92);
  std::cout << bola1.get_raio() << std::endl;
  std::cout << bola2.get_raio() << std::endl;
}
