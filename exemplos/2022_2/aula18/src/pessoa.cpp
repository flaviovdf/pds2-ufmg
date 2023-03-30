#include <iostream>
#include <iterator>

#include "pessoa.h"

Pessoa::Pessoa(
  std::string nome,
  unsigned int matricula,
  unsigned int cpf,
  date_t nascimento
): _nome(nome),
   _matricula(matricula),
   _cpf(cpf),
   _nascimento(nascimento)
{
  std::cout << "Construindo uma pessoa!" << std::endl;
}

std::string Pessoa::get_nome() {
  return _nome;
}

unsigned int Pessoa::get_matricula() {
  return _matricula;
}

unsigned int Pessoa::get_cpf() {
  return _cpf;
}

date_t Pessoa::get_nascimento() {
  return _nascimento;
}

Tipo Pessoa::get_tipo() {
  return Tipo::PESSOA;
}