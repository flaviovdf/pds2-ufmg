#include "aluno.h"

Aluno::Aluno(std::string nome, int matricula):
  _nome(nome), _matricula(matricula) {}

std::string Aluno::get_nome() const {
  return this->_nome;
}

int Aluno::get_matricula() const {
  return this->_matricula;
}
