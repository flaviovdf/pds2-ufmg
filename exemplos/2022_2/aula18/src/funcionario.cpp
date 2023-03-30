#include <iostream>

#include "funcionario.h"

Funcionario::Funcionario(
  std::string nome,
  unsigned int matricula,
  unsigned int cpf,
  date_t nascimento,
  date_t data_admissao,
  double salario
): Pessoa(nome, matricula, cpf, nascimento),
   _data_admissao(data_admissao),
   _salario(salario) {
  
  std::cout << "Construindo o Funcionario" << std::endl;
}

double Funcionario::get_salario() {
  return _salario;
}

date_t Funcionario::get_data_admissao() {
  return _data_admissao;
}

void Funcionario::set_salario(double salario) {
  if (salario > 0)
    _salario = salario;
}


Tipo Funcionario::get_tipo() {
  return Tipo::FUNCIONARIO;
}