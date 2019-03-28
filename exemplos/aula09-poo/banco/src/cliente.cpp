#include "cliente.h"


Cliente::Cliente(int cpf, std::string nome) {
  _cpf = cpf;
  _nome = nome;
}

std::string Cliente::get_nome() {
  return _nome;
}

int Cliente::get_cpf() {
  return _cpf;
}

std::string Cliente::to_string() {
  return _nome;
}
