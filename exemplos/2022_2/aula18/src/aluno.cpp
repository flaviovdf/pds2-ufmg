#include <iostream>

#include "aluno.h"
#include "data.h"

Aluno::Aluno(
  std::string nome,
  unsigned int matricula,
  unsigned int cpf,
  date_t nascimento,
  semestre_t semestre_matricula
): Pessoa(nome, matricula, cpf, nascimento), // 1
   _semestre_matricula(semestre_matricula)   // 2
{
  std::cout << "Construindo um aluno!" << std::endl;
}


semestre_t Aluno::get_semestre_matricula() {
  return _semestre_matricula;
}

Tipo Aluno::get_tipo() {
  return Tipo::ALUNO;
}