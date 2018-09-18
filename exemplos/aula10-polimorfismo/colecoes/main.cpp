#include "listadupla.h"
#include "bst.h"

int main(void) {
  ColecaoIF *lista = new ListaDuplamenteEncadeada();
  lista->inserir_elemento(2);
  lista->inserir_elemento(3);
  lista->inserir_elemento(4);

  ListaDuplamenteEncadeada *l = (ListaDuplamenteEncadeada*) lista;
  l->remove_iesimo(1);

  lista->imprimir();
  l->imprimir();

  delete lista;
  return 0;
}
