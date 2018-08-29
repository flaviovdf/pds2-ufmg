#include <stdio.h>

#include "listavetor.h"

int main(void) {
  ListaVetorInteiros lista = ListaVetorInteiros();
  for (int i = 0; i < 1000; i++)
    lista.inserir_elemento(i);
  lista.imprimir();
  return 0;
}
