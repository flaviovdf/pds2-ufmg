#ifndef PDS2_PESSOA_H
#define PDS2_PESSOA_H

#include <string>

#include "data.h"

enum Tipo {
  PESSOA = 'P',
  ALUNO = 'A',
  PROFESSOR = '$',
  FUNCIONARIO = 'F'
};

class Pessoa {
  private:
    std::string _nome;
    unsigned int _matricula;
    unsigned int _cpf;
    date_t _nascimento;
  public:
    Pessoa(
      std::string _nome,
      unsigned int _matricula,
      unsigned int _cpf,
      date_t _nascimento
    );

    std::string get_nome();
    unsigned int get_matricula();
    unsigned int get_cpf();
    date_t get_nascimento();
    
    virtual Tipo get_tipo();
};

#endif