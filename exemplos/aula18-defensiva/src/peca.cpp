#include <stdexcept>

#include "peca.h"

Peca::Peca(int x, int y) {
  if (x < 0 || y < 0) {
    throw std::invalid_argument("x e y devem ser positivos");
  }
  if (x >= 8 || y >= 8) {
    throw std::invalid_argument("x e y devem ser < 8");
  }
  this->_x = x;
  this->_y = y;
}

int Peca::get_x() {
  return this->_x;
}

int Peca::get_y() {
  return this->_y;
}
