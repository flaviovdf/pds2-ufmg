#ifndef PDS2_PROF_H
#define PDS2_PROF_H

#include "servidor.h"

#include <set>
#include <string>

class Professor : public Servidor {
private:
  std::set<int> _disciplinas;
public:
  Professor(
    std::string nome,
    unsigned int cpf,
    double salario,
    unsigned int siape,
    unsigned int cod_departamento
  );
  virtual unsigned int get_acesso() override;
};

#endif
