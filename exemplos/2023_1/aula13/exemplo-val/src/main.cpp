#include <exception>
#include <iostream>

#include "sistema.h"

int main() {
  Sistema sistema_uber = Sistema();
  Carro c1 = Carro("branco");
  Carro c2 = Carro("verde");


  sistema_uber.cadastra_cliente("a");
  sistema_uber.cadastra_cliente("b");
  sistema_uber.cadastra_cliente("c");
  sistema_uber.adicionar_carro(&c1);
  sistema_uber.adicionar_carro(&c2);
}
