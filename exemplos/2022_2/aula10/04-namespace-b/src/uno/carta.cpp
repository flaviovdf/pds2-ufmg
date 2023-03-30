#include "uno/carta.h"

using namespace uno;

Carta::Carta(Cor cor, int numero) {
  _cor = cor;
  _numero = numero;
}

Cor Carta::get_cor() const {
  return _cor;
}

int Carta::get_numero() const {
  return _numero;
}
