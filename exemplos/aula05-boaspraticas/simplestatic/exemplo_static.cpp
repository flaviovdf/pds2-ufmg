#include <iostream>
#include "exemplo_static.h"

int Teste::_alocacoes = 0;

Teste::Teste() {
  Teste::_alocacoes++;
  _local++;
  std::cout << _alocacoes << std::endl;
  std::cout << _local << std::endl;
}

int main(void) {
  Teste teste1 = Teste();
  Teste *teste2 = new Teste();
  delete teste2;
}
