#ifndef PDS2_PROFESSOR_H
#define PDS2_PROFESSOR_H

#include <set>
#include <string>

#include "funcionario.h"

class Professor : public Funcionario {
  private:
    std::set<std::string> _disciplinas_lecionando;
  public:
    Professor(
      std::string nome,
      unsigned int matricula,
      unsigned int cpf,
      date_t nascimento,
      date_t data_admissao,
      double salario
    );
    void adicionar_disciplina(std::string disciplina);
    bool remover_disciplina(std::string disciplina);
    std::set<std::string> get_disciplinas();
    virtual Tipo get_tipo() override;
};

#endif