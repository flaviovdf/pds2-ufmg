#include <stdexcept>

class Dinheiro {
private:
  unsigned int _parte_real;
  unsigned short _centavos;
  Dinheiro(unsigned int parte_real, unsigned short centavos) {
    if (centavos >= 100) {
      throw std::invalid_argument("Centavos deve ser < 100");
    }
    this->_parte_real = parte_real;
    this->_centavos = centavos;
  }
};

class ContaCorrente {
private:
  Dinheiro _dinheiro;
public:
  void depositar(Dinheiro valor) {
    this->_dinheiro->adicionar(valor);
  }
};
