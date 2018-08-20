#include <iostream>
#include <string>

#include "agencia.h"
#include "banco.h"
#include "cliente.h"
#include "conta.h"

int main(void) {

  // Mesma coisa de Banco banco(1, "Banco do Brasil")
  Banco banco = Banco(1, "Banco do Brasil");
  Agencia &agencia = banco.cria_agencia("Antonio Carlos, 6667", "Pampulha",
                                        "Belo Horizonte", 3217901);

  // Adicionando um novo cliente
  agencia.adiciona_cliente(1, "Flavio Figueiredo");

  // Criando uma conta (no momento, 1 conta por cliente)
  Conta &conta = agencia.cria_conta(1);

  std::cout << "Saldo de Flavio " << conta.get_saldo() << std::endl;
  conta.depositar(200);
  std::cout << "Saldo de Flavio " << conta.get_saldo() << std::endl;

  conta.sacar(2000);

  return 0;
}
