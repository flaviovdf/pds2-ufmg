#include <iostream>

#include "estudante.h"
#include "pessoa.h"

int main() {
  Pessoa pessoa("Flavio F.");
  Estudante estudante("Jane Doe", 20180101);
  std::cout << "A pessoa é: " << pessoa.get_nome() << std::endl;
  std::cout << "O estudante é: " << estudante.get_nome() << std::endl;
  return 0;
}
