#ifndef PDS2_PESSOA_FISICA_UFMG
#define PDS2_PESSOA_FISICA_UFMG

#include "pessoa.h"
#include <map>

class PessoaFisicaUFMG {
  private:
    std::map<Tipo, Pessoa *> _personas;
    unsigned int _cpf;
  public:
    unsigned int get_cpf();
    void *nova_persona(Tipo tipo, Pessoa *persona);
};


#endif