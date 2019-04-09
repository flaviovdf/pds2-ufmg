#include "pessoa.h"

Pessoa::Pessoa(std::string nome):
  _nome(nome) {}

std::string Pessoa::get_nome() const {
  return this->_nome;
}

std::string Pessoa::defina_meu_tipo() const {
  return "Sou uma pessoa!";
}
