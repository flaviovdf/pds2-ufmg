#include "banco.h"

Banco::Banco(int numero, std::string nome) {
  _numero = numero;
  _nome = nome;
  _num_agencias = 0;
}

Agencia &Banco::cria_agencia(std::string logradouro, std::string bairro,
                             std::string cidade, int cep) {
  int numero = ++_num_agencias;
  Agencia agencia = Agencia(numero, logradouro, bairro, cidade, cep);
  _agencias.insert(std::pair<int, Agencia>(numero, agencia));
  return _agencias.at(numero);
}
