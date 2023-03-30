#include "registro_pessoas.h"
#include "pessoa.h"

void RegistroPessoas::cadastrar_pessoa(Pessoa &pessoa) {
  _registro[pessoa.get_cpf()] = &pessoa;
}

Pessoa *RegistroPessoas::busca_cpf(unsigned int cpf) {
  return _registro.at(cpf);
}