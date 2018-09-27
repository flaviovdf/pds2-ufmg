#include <iostream>

#include "estudante.h"
#include "pessoa.h"

void f(Pessoa &pessoa) {
  std::cout << "Na função: " << pessoa.defina_meu_tipo() << std::endl;
}

int main() {
  Pessoa pessoa("Flavio F.");
  Estudante estudante("Jane Doe", 20180101);
  std::cout << "A pessoa é: " << pessoa.defina_meu_tipo() << std::endl;
  std::cout << "O estudante é: " << estudante.defina_meu_tipo() << std::endl;
  f(pessoa);
  f(estudante);
  return 0;
}
