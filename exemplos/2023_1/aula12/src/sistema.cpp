#include "sistema.h"
#include "frota.h"
#include <exception>

#include <iostream>

Cliente *Sistema::cadastra_cliente(std::string nome) {
  if (_clientes.count(nome) > 0) {
    throw cliente_ja_existe_e();
  }

  Cliente *cliente = new Cliente(nome);
  _clientes[nome] = cliente;
  return cliente;
}

void Sistema::adicionar_carro(Carro *carro) {
  _frota.adicionar_carro(carro);
}

Carro *Sistema::busca_uber(std::string nome) {
  if (_clientes.count(nome) == 0) {
    throw cliente_nao_existe_e();
  }

  Cliente *c = _clientes.at(nome);

  if (c->get_saldo() == 0) {
    throw sem_saldo_e();
  }

  return _frota.alocar_carro();
}