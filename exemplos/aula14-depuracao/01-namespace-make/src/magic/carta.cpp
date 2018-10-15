#include "magic/carta.h"

using namespace magic;

Carta::Carta(std::string nome, double dano) {
  this->_nome = nome;
  this->_dano = dano;
}

double Carta::get_dano() const {
  return this->_dano;
}

std::string Carta::get_nome() const {
  return this->_nome;
}
