#include "professor.h"

Professor::Professor(
  std::string nome,
  unsigned long cpf,
  double salario
): Funcionario(nome, cpf, salario) {};

Acesso Professor::acesso_moodle() const {
  return Acesso::ALTO;
}
