#include "listadupla.h"
#include "bst.h"

int main(void) {
  ColecaoIF *lista = new ListaDuplamenteEncadeada();
  lista->inserir_elemento(2);
  lista->inserir_elemento(3);

  ColecaoIF *bst = new BST();
  bst->inserir_elemento(10);
  bst->inserir_elemento(-1);
  bst->inserir_elemento(6);

  lista->imprimir();
  bst->imprimir();

  ListaDuplamenteEncadeada *l = dynamic_cast<ListaDuplamenteEncadeada*>(lista);
  l->remove_iesimo(1);

  lista->imprimir();
  l->imprimir();

  delete lista;
  delete bst;
  return 0;
}
