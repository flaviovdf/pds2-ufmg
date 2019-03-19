#include <iostream>

#include "bst.h"

int main(void) {
  BST bst = BST();
  bst.inserir_elemento(50);
  bst.inserir_elemento(25);
  bst.inserir_elemento(65);
  bst.inserir_elemento(12);
  bst.inserir_elemento(70);

  std::cout << bst.tem_elemento(50) << std::endl;
  std::cout << bst.tem_elemento(9) << std::endl;

  bst.imprimir();
  return 0;
}
