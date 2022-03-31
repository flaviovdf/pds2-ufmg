#include <cassert>
#include <stdexcept>
#include <iostream>

class Dinheiro {
private:
  unsigned int _parte_real;
  unsigned short _centavos;
public:
  Dinheiro(unsigned int parte_real, unsigned short centavos) {
    if (centavos >= 100) {
      throw std::invalid_argument("Centavos deve ser < 100");
    }
    this->_parte_real = parte_real;
    this->_centavos = centavos;
  }

  Dinheiro operator +(Dinheiro const &o) const {
    assert(o._centavos <= 99);
    assert(this->_centavos <= 99);
    unsigned short novo_centavos = ((this->_centavos + o._centavos) / 100) - 1;
    if (novo_centavos < 0)
      novo_centavos = 0;
    unsigned short extra = (this->_centavos + o._centavos) % 100;
    unsigned int novo_reais = this->_parte_real + o._parte_real + extra;
    return Dinheiro(novo_reais, novo_centavos);
  }

  bool operator <(Dinheiro const &o) const {
    unsigned int aux_this = (this->_parte_real + this->_centavos) * 100;
    unsigned int aux_o = (o._parte_real + o._centavos) * 100;
    return aux_this > aux_o;
  }

  void imprime() {
    std::cout << this->_parte_real << "," << this->_centavos << std::endl;
  }
};

int main() {
  Dinheiro d1(10, 20);
  Dinheiro d2(1, 80);
  Dinheiro d3 = d1 + d2;
  d3.imprime();
  std::cout << (d3 < d1) << std::endl;
}
