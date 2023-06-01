#ifndef PDS2_FUNCIONARIO_H
#define PDS2_FUNCIONARIO_H

#include "pessoa.h"

class Funcionario : public Pessoa {
private:
  const unsigned int _siape;
  double _salario;
public:
  Funcionario(std::string nome,
              unsigned int cpf,
              unsigned int siape,
              double salario);
  unsigned int get_siape() const;
  double get_salario();
  void set_salario(double salario);
};

#endif
