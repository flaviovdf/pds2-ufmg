#ifndef PDS2_SISTEMA_H
#define PDS2_SISTEMA_H

#include <map>
#include <string>

#include "cliente.h"
#include "frota.h"

class cliente_ja_existe_e {};
class cliente_nao_existe_e {};
class sem_saldo_e {};

class Sistema {
  private:
    std::map<std::string, Cliente *> _clientes;
    Frota _frota;
  public:
    ~Sistema();
    Cliente *cadastra_cliente(std::string nome);
    void adicionar_carro(Carro *carro);
    Carro *busca_uber(std::string nome);
};

#endif