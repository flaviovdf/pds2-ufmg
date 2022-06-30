#ifndef PDS2_SERVIDOR_H
#define PDS2_SERVIDOR_H


#include <string>

#include "pessoa.h"


class Servidor : public Pessoa {
  private:
    double _salario;
    const unsigned int _siape;
    unsigned int _cod_departamento;
  public:
    Servidor(
      std::string nome,
      unsigned int cpf,
      double salario,
      unsigned int siape,
      unsigned int cod_departamento
    );
    double get_salario();
    unsigned int get_siape() const;
    unsigned int get_cod_departamento();
    virtual unsigned int get_acesso() override;
};

#endif