#include <string>

#include "carro.h"


Carro::Carro(std::string cor) {
  _cor = cor;
}

std::string Carro::get_cor() {
  return _cor;
}