#include "rainha.h"

Rainha::Rainha(int x, int y): _x(x), _y(y) {}

int Rainha::get_x() {
  return _x;
}

int Rainha::get_y() {
  return _y;
}

bool Rainha::pode_mover(int x, int y) {
  return false;
}
