#include "pessoa.h"

Pessoa::Pessoa(
  std::string nome,
  unsigned long cpf
): _nome(nome),
   _cpf(cpf) {
}

std::string Pessoa::get_nome() const {
  return this->_nome;
}

unsigned long Pessoa::get_cpf() const {
  return _cpf;
}

Acesso Pessoa::acesso_moodle() const {
  return Acesso::SEM_ACESSO;
}