#ifndef PDS2_ESTUDANTE_H
#define PDS2_ESTUDANTE_H

#include "pessoa.h"

#include <string>

class Estudante : public Pessoa {
private:
  const int _matricula;
public:
  Estudante(
    std::string nome,
    unsigned int cpf,
    int matricula
  );
  int get_matricula() const;
};

#endif