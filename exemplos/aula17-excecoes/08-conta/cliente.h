#ifndef PDS2_CLIENTE_H
#define PDS2_CLIENTE_H

#include <functional>
#include <string>
#include <vector>

#include "conta.h"


class Cliente {
private:
  int _cpf;
  std::string _nome;
public:
  Cliente(int cpf, std::string nome);

  /*
   * Retorna o nome do cliente.
   */
  std::string get_nome();

  /*
   * Retorna o cpf do cliente.
   */
  int get_cpf();

  /*
   * Imprime os dados do cliente
   */
  std::string to_string();
};


#endif
