#include <stdexcept>
#include "agencia.h"


Agencia::Agencia(int numero, std::string logradouro, std::string bairro,
                 std::string cidade, int cep) {
  endereco_t endereco;
  endereco.logradouro = logradouro;
  endereco.bairro = bairro;
  endereco.cidade = cidade;
  endereco.cep = cep;
  _numero = numero;
  _endereco = endereco;
  _num_contas = 0;
}

int Agencia::get_numero() {
  return _numero;
}

Cliente &Agencia::adiciona_cliente(int cpf, std::string nome) {
  if (_clientes.count(cpf) != 0) {
    throw std::invalid_argument("Cliente já existe!");
  }
  Cliente cliente(cpf, nome);
  _clientes.insert(std::pair<int, Cliente>(cpf, cliente));
  return _clientes.at(cpf);
}

Conta &Agencia::cria_conta(int cpf) {
  if (_clientes.count(cpf) == 0) {
    throw std::invalid_argument("Cliente não existe!");
  }
  int numero = ++_num_contas;
  Conta conta(numero);
  _contas.insert(std::pair<int, Conta>(numero, conta));
  return _contas.at(numero);
}
