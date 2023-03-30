#ifndef PDS2_FUNC_H
#define PDS2_FUNC_H

#include "pessoa.h"

class Funcionario : public Pessoa {
  private:
    date_t _data_admissao;
    double _salario;
  public:
    Funcionario(
      std::string nome,
      unsigned int matricula,
      unsigned int cpf,
      date_t nascimento,
      date_t data_admissao,
      double salario
    );
    date_t get_data_admissao();
    double get_salario();
    void set_salario(double salario);
    virtual Tipo get_tipo() override;
};

#endif