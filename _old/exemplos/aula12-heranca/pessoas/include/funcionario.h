#ifndef PDS2_ESTUDANTE_H
#define PDS2_ESTUDANTE_H

#include "pessoa.h"

class Funcionario : public Pessoa {
private:
  double _salario;
public:
  Funcionario(
    std::string nome,
    unsigned long cpf,
    double salario
  );
  double get_salario();
  virtual Acesso acesso_moodle() const override;
};

#endif
