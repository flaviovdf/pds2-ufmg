#include <iostream>
#include <set>
#include <string>

#include "professor.h"

Professor::Professor(
  std::string nome,
  unsigned int matricula,
  unsigned int cpf,
  date_t nascimento,
  date_t data_admissao,
  double salario
): Funcionario(nome, matricula, cpf, nascimento, data_admissao, salario) {
  std::cout << "Criando o professor" << std::endl;
}

void Professor::adicionar_disciplina(std::string disciplina) {
  _disciplinas_lecionando.insert(disciplina);
}

bool Professor::remover_disciplina(std::string disciplina) {
  return _disciplinas_lecionando.erase(disciplina);
}

std::set<std::string> Professor::get_disciplinas() {
  return _disciplinas_lecionando;
}

Tipo Professor::get_tipo() {
  return Tipo::PROFESSOR;
}