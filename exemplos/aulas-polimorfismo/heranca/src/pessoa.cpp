#include <iostream>
#include "pessoa.h"

Pessoa::Pessoa(
  std::string nome,
  unsigned int cpf
): _nome(nome), _cpf(cpf) {
  std::cout << "Construindo a pessoa" << std::endl;
}

std::string Pessoa::get_nome() const {
  return _nome;
}

unsigned int Pessoa::get_cpf() const {
  return _cpf;
}

unsigned int Pessoa::get_acesso() {
  return 0;
}