#include <iostream>
#include "servidor.h"

Servidor::Servidor(
  std::string nome,
  unsigned int cpf,
  double salario,
  unsigned int siape,
  unsigned int cod_departamento
): Pessoa(nome, cpf),
   _salario(salario),
   _siape(siape),
   _cod_departamento(cod_departamento) 
{
  std::cout << "Construindo o servidor" << std::endl;
}

unsigned int Servidor::get_cod_departamento() {
  return _cod_departamento;
}

unsigned int Servidor::get_siape() const {
  return _siape;
}

double Servidor::get_salario() {
  return _salario;
}

unsigned int Servidor::get_acesso() {
  return 2;
}