#ifndef PDS2_ESTUDANTE_H
#define PDS2_ESTUDANTE_H

#include "pessoa.h"

class Estudante : public Pessoa {
private:
  int _matricula;
public:
  Estudante(std::string nome, int matricula);
  int get_matricula() const;
  virtual std::string defina_meu_tipo() const override;
};

#endif
