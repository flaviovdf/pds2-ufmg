#include <exception>
#include <iostream>

#include "sistema.h"

int main() {
  Sistema sistema_uber = Sistema();

  Carro c1 = Carro("branco");
  Carro c2 = Carro("verde");


  std::string login;
  std::cout << "Digite um login: " << std::endl;
  std::cin >> login;
  while(login != "sair") {
    try {
      Cliente *cliente = \
        sistema_uber.cadastra_cliente(login);
      cliente->adicionar_saldo(20);
      std::cout << "Cliente cadastrado: " << cliente->get_nome() << std::endl;
    } catch (cliente_ja_existe_e &e) {
      std::cout << "Cliente não cadastrado, já existe. Escolha outro login." << std::endl;
    }
    std::cout << "Digite um login: " << std::endl;
    std::cin >> login;
  }

  try {
    sistema_uber.busca_uber("flavio,,@d");
  } catch(cliente_ja_existe_e &e) {

  } catch(cliente_nao_existe_e &e) {
    
  } catch(sem_saldo_e &e) {
    
  }
  sistema_uber.adicionar_carro(&c1);
  sistema_uber.adicionar_carro(&c2);
}