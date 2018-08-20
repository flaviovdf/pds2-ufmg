#ifndef PDS2_AGENCIA_H
#define PDS2_AGENCIA_H

#include <map>
#include <set>

#include "cliente.h"
#include "conta.h"
#include "endereco.h"


class Agencia {
private:
  int _numero;
  int _num_contas;
  endereco_t _endereco;
  std::map<int, Cliente> _clientes;
  std::map<int, Conta> _contas;
public:
  Agencia(int numero, std::string logradouro, std::string bairro,
          std::string cidade, int cep);

  /*
   * Retorna o número da agência;
   */
  int get_numero();

  /*
   * Adiciona um cliente na agência
   */
  Cliente &adiciona_cliente(int cpf, std::string nome);

  /*
   * Cria uma nova conta para um dado cliente
   */
  Conta &cria_conta(int cpf);
};


#endif
