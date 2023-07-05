#ifndef PDS2_PESSOA_H
#define PDS2_PESSOA_H

#include <string>
#include <map>

#include "papel.h"

class ja_tenho_papel_e {};
class nao_sou_desse_papel_e {};

class Pessoa {
private:
  std::string _nome;
  const unsigned int _cpf;
  std::map<papel_t, Papel *> _papeis;
public:
  Pessoa(
    std::string nome,
    unsigned int cpf
  );
  void set_nome(std::string novo_nome);
  std::string get_nome();
  unsigned int get_cpf();
  void adicionar_papel(Papel &papel);
  Papel *get_papel(papel_t tipo);
};

#endif
