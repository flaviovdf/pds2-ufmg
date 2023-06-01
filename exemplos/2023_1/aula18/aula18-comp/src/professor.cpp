#include "professor.h"
#include "papel.h"

Professor::Professor(
  unsigned int siape,
  double salario
): Funcionario(siape, salario) {
}

void Professor::adicionar_disciplina(std::string disc) {
  _disciplinas.insert(disc);
}

std::set<std::string> Professor::get_disciplinas() {
  return _disciplinas;
}

papel_t Professor::get_papel_tipo() const {
  return papel_t::PROFESSOR;
}