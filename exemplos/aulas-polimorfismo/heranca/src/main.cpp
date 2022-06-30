#include "estudante.h"
#include "pessoa.h"
#include "professor.h"
#include "servidor.h"

#include <iostream>

void imprime_acesso(Pessoa &p) {
  std::cout << p.get_acesso() << std::endl;
}

int main() {
  Professor prof = Professor("Flavio", 12, 1.0, 121, 2);
  Estudante est("Ana", 123, 2022101);
  Pessoa pessoa("Breno", 1234);
  Servidor servidor = Servidor("Paula", 12345, 2.0, 123, 1);

  imprime_acesso(prof);
  imprime_acesso(est);
  imprime_acesso(pessoa);
  imprime_acesso(servidor);

  return 0;
}