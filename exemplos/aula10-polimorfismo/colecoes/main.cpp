#include "listadupla.h"
#include "bst.h"

int main() {
  ColecaoIF *lista = new ListaDuplamenteEncadeada();
  lista->inserir_elemento(2);
  lista->inserir_elemento(3);
  lista->inserir_elemento(4);

  ColecaoIF *arvore = new BST();
  arvore->imprimir();
  arvore->inserir_elemento(2);
  arvore->imprimir();

  lista->imprimir();

  ListaDuplamenteEncadeada *l2 = \
      dynamic_cast<ListaDuplamenteEncadeada*>(arvore);
  l2->remove_iesimo(0);
  arvore->imprimir();

  lista->imprimir();

  delete lista;
  return 0;
}
