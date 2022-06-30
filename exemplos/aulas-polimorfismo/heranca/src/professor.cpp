#include <iostream>
#include "professor.h"

Professor::Professor(
  std::string nome,
  unsigned int cpf,
  double salario,
  unsigned int siape,
  unsigned int cod_departamento
): Servidor(nome, cpf, salario, siape, cod_departamento) {
  std::cout << "Construindo o professor" << std::endl;
}

unsigned int Professor::get_acesso() {
  return 3;
}