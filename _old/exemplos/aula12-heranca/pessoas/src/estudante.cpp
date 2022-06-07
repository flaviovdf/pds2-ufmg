#include "estudante.h"

Estudante::Estudante(
  std::string nome,
  unsigned long cpf,
  unsigned int matricula
): Pessoa(nome, cpf),
   _matricula(matricula) {};

unsigned int Estudante::get_matricula() const {
  return _matricula;
}

Acesso Estudante::acesso_moodle() const {
  return Acesso::BAIXO;
}
