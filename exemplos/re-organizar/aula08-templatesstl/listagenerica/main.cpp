#include <string>

#include "listasimples.h"

int main(void) {
  ListaSimplesmenteEncadeada<int> lista = ListaSimplesmenteEncadeada<int>();
  for (int i = 0; i < 1000; i++)
    lista.inserir_elemento(i);
  lista.imprimir();

  ListaSimplesmenteEncadeada<std::string> lista2 = \
      ListaSimplesmenteEncadeada<std::string>();
  for (int i = 0; i < 1000; i++)
    lista2.inserir_elemento("numero "+ std::to_string(i));
  lista2.imprimir();
  return 0;
}
