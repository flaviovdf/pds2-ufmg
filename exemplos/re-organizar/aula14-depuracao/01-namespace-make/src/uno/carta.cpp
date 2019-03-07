#include "uno/carta.h"

using namespace uno;

Carta::Carta(Cor cor, int numero) {
  this->_cor = cor;
  this->_numero = numero;
}

Cor Carta::get_cor() const {
  return this->_cor;
}

int Carta::get_numero() const {
  return this->_numero;
}
