#include <string>

#include "listadupla.h"

int main(void) {
  ListaDuplamenteEncadeada lista = ListaDuplamenteEncadeada();
  lista.inserir_elemento(2);
  lista.inserir_elemento(3);
  lista.inserir_elemento(4);
  lista.inserir_elemento(5);
  lista.inserir_elemento(6);
  lista.imprimir();
  lista.remove_iesimo(0);
  lista.imprimir();
  lista.remove_iesimo(3);
  lista.imprimir();
  lista.remove_iesimo(1);
  lista.imprimir();
  return 0;
}
