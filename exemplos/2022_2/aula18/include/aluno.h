#ifndef PDS2_ALUNO_H
#define PDS2_ALUNO_H

#include <string>

#include "data.h"
#include "pessoa.h"

class Aluno : public Pessoa {
  private:
    semestre_t _semestre_matricula;
  public:
    Aluno(
      std::string nome,
      unsigned int matricula,
      unsigned int cpf,
      date_t nascimento,
      semestre_t semestre_matricula
    );
    semestre_t get_semestre_matricula();
    virtual Tipo get_tipo() override;
};

#endif