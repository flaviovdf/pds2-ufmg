#include "cliente.h"

Cliente::Cliente(std::string nome) {
  _saldo = 0.0;
  _nome = nome;
}

void Cliente::adicionar_saldo(double saldo) {
  _saldo += saldo;
}

std::string Cliente::get_nome() {
  return _nome;
}

double Cliente::get_saldo() {
  return _saldo;
}