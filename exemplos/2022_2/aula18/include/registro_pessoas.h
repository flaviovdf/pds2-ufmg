#ifndef PDS2_REGISTRO_H
#define PDS2_REGISTRO_H

#include <map>

#include "pessoa.h"
#include "pessoa_ufmg.h"

class RegistroPessoas {
  private:
    std::map<unsigned int, PessoaFisicaUFMG *> _registro;
  public:
    void cadastrar_pessoa(PessoaFisicaUFMG &pessoa);
    Pessoa *busca_cpf(unsigned int cpf);
};

#endif