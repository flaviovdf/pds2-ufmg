#include "estudante.h"

Estudante::Estudante(
  std::string nome,
  unsigned int cpf,
  int matricula
): Pessoa(nome, cpf), _matricula(matricula) {}

int Estudante::get_matricula() const {
  return _matricula;
}