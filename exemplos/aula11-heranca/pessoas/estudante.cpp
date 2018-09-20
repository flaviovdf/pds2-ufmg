#include "estudante.h"

Estudante::Estudante(std::string nome, int matricula):
  Pessoa(nome), _matricula(matricula) {}

int Estudante::get_matricula() const {
  return this->_matricula;
}

std::string Estudante::defina_meu_tipo() const {
  return "Sou um estudante";
}
