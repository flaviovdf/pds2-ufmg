#ifndef PDS2_PROFESSOR_H
#define PDS2_PROFESSOR_H

#include "funcionario.h"

class Professor : public Funcionario {
public:
  Professor(
      std::string nome,
      unsigned long cpf,
      double salario
  );
  virtual Acesso acesso_moodle() const override;
};

#endif
