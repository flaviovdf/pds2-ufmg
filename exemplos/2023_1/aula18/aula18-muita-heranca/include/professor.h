#ifndef PDS2_PROFESSOR_H
#define PDS2_PROFESSOR_H

#include <set>
#include <string>

#include "funcionario.h"

class Professor : public Funcionario {
private:
  std::set<std::string> _disciplinas;
public:
  Professor(std::string nome,
            unsigned int cpf,
            unsigned int siape,
            double salario);
  void adicionar_disciplina(std::string disc);
  std::set<std::string> get_disciplinas();
};

#endif
