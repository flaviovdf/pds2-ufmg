#include <iostream>

#include "estudante.h"
#include "pessoa.h"

int main() {
  Pessoa pessoa("Flavio F.");
  Estudante estudante("Jane Doe", 20180101);

  Pessoa &p2 = estudante;
  std::cout << p2.defina_meu_tipo() << std::endl;

  Estudante &e2 = dynamic_cast<Estudante&>(p2);

  return 0;
}
