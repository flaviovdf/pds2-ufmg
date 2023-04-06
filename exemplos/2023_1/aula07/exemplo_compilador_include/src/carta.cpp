#include "carta.h"

Carta::Carta(
  num numero, naipe naipe
) {
  _numero = numero;
  _naipe = naipe;
}

num Carta::get_numero() {
  return _numero;
}

naipe Carta::get_naipe() {
  return _naipe;
}