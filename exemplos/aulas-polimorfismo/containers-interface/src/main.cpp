#include "lista.h"
#include "listadupla.h"
#include "listavetor.h"

#include <cstdlib>

void adiciona_elemento(ListaIF *lista, int e) {
  lista->inserir_elemento(e);
}

int main() {
  ListaIF *lista_vetor = new ListaVetor();
  ListaIF *lista_dupla = new ListaDuplamenteEncadeada();

  int x = rand();

  if (x % 2 == 0) {
    adiciona_elemento(lista_vetor, 7);
  } else {
    adiciona_elemento(lista_dupla, 7);
  }
  adiciona_elemento(lista_vetor, 3);
  adiciona_elemento(lista_dupla, 2);

  lista_vetor->imprimir();
  lista_dupla->imprimir();

  delete lista_vetor;
  delete lista_dupla;

  return 0;
}