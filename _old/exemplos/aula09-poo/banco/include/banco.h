#ifndef PDS2_BANCO_H
#define PDS2_BANCO_H

#include <map>
#include <string>

#include "agencia.h"


class Banco {
private:
  int _numero;
  int _num_agencias;
  std::string _nome;
  std::map<int, Agencia> _agencias;
public:
  Banco(int numero, std::string nome);

  /*
   * Cria uma nova agência para este banco.
   */
  Agencia &cria_agencia(std::string logradouro, std::string bairro,
                        std::string cidade, int cep);
};


#endif
