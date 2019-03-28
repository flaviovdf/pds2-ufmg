#include <stdexcept>
#include "conta.h"


Conta::Conta(int numero) {
  _numero = numero;
  _saldo = 0;
}

void Conta::sacar(double valor) {
  if (_saldo - valor < 0) {
    throw std::invalid_argument("Conta vai ficar negativa!");
  }
  _saldo -= valor;
}

void Conta::depositar(double valor) {
  _saldo += valor;
}

int Conta::get_numero() {
  return _numero;
}

double Conta::get_saldo() {
  return _saldo;
}
