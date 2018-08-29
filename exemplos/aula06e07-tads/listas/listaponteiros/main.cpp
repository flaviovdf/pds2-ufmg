#include <stdio.h>

#include "listasimples.h"

int main(void) {
  ListaSimplesmenteEncadeada lista = ListaSimplesmenteEncadeada();
  for (int i = 0; i < 1000; i++)
    lista.inserir_elemento(i);
  lista.imprimir();
  return 0;
}
