#include "magic/carta.h"

using namespace magic;

Carta::Carta(std::string nome, double dano) {
  _nome = nome;
  _dano = dano;
}

double Carta::get_dano() const {
  return _dano;
}

std::string Carta::get_nome() const {
  return _nome;
}
