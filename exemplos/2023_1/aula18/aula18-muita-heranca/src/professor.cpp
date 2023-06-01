#include "professor.h"

Professor::Professor(
  std::string nome,
  unsigned int cpf,
  unsigned int siape,
  double salario
): Funcionario(nome, cpf, siape, salario) {
}

void Professor::adicionar_disciplina(std::string disc) {
  _disciplinas.insert(disc);
}

std::set<std::string> Professor::get_disciplinas() {
  return _disciplinas;
}