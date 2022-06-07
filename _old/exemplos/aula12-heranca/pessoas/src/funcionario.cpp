#include "funcionario.h"

Funcionario::Funcionario(
  std::string nome,
  unsigned long cpf,
  double salario
): Pessoa(nome, cpf),
   _salario(salario) {};

double Funcionario::get_salario() {
  return _salario;
}

Acesso Funcionario::acesso_moodle() const {
  return Acesso::BAIXO;
}
