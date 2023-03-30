#include "midia.h"

Midia::Midia(std::string nome, Tipo tipo):
  _nome(nome), _tipo(tipo) {}

Tipo Midia::get_tipo() {
  return this->_tipo;
}

std::string Midia::get_nome() {
  return this->_nome;
}
