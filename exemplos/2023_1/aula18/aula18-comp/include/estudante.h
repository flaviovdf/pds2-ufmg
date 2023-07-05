#ifndef PDS2_ESTUDANTE_H
#define PDS2_ESTUDANTE_H

#include "pessoa.h"

class Estudante : public Papel {
private:
  const unsigned int _matricula;
public:
  Estudante(unsigned int matricula);
  unsigned int get_matricula() const;
  papel_t get_papel_tipo() const override;
};

#endif
