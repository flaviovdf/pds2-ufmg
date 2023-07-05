#ifndef PDS2_ESTUDANTE_H
#define PDS2_ESTUDANTE_H

#include "pessoa.h"

class Estudante : public Pessoa {
private:
  const unsigned int _matricula;
public:
  Estudante(std::string nome,
            unsigned int cpf,
            unsigned int matricula);
  unsigned int get_matricula() const;
};

#endif
