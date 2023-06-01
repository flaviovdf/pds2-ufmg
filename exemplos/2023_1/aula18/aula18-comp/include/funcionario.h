#ifndef PDS2_FUNCIONARIO_H
#define PDS2_FUNCIONARIO_H

#include "papel.h"

class Funcionario : public Papel {
private:
  const unsigned int _siape;
  double _salario;
public:
  Funcionario(unsigned int siape,
              double salario);
  unsigned int get_siape() const;
  double get_salario();
  void set_salario(double salario);
};

#endif
