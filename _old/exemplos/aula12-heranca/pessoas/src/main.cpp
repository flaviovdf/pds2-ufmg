#include <iostream>

#include "estudante.h"
#include "pessoa.h"

using namespace std;

void f(Pessoa &pessoa) {
  cout << "Na função: " << pessoa.acesso_moodle() << endl;
}

int main() {
  Pessoa pessoa("Flavio F.", 12345678900);
  Estudante estudante("Jane Doe", 12345678901, 20180101);
  cout << pessoa.acesso_moodle() << endl;
  cout << estudante.acesso_moodle() << endl;
  f(pessoa);
  f(estudante);
  return 0;
}
