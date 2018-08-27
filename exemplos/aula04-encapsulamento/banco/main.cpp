#include <iostream>
#include <string>

#include "agencia.h"
#include "banco.h"
#include "cliente.h"
#include "conta.h"

int main(void) {
  // Ou, eu posso fazer também
  // Banco banco = Banco(1, "Banco do Brasil");
  Banco banco(1, "Banco do Brasil");
  Agencia &agencia = banco.cria_agencia("Av Antonio Carlos, 6627",
                                       "Pampulha", "Belo Horizonte",
                                        3217901);
  agencia.adiciona_cliente(111, "Flavio F.");
  Conta &conta = agencia.cria_conta(111);
  std::cout << "Saldo em conta " << conta.get_saldo() << std::endl;

  conta.depositar(200);
  std::cout << "Saldo em conta " << conta.get_saldo() << std::endl;

  agencia.adiciona_cliente(222, "Joao P.");
  Conta &conta_joao = agencia.cria_conta(222);

  std::cout << "Saldo em conta Flavio " << conta.get_saldo() << std::endl;
  std::cout << "Saldo em conta Joao " << conta_joao.get_saldo() << std::endl;
}
