#ifndef PDS2_BST_H
#define PDS2_BST_H

#include "node.h"


class BST {
private:
  Node *_raiz;
  int _num_elementos_inseridos;
public:
  BST();
  ~BST();
  void inserir_elemento(int elemento);
  bool tem_elemento(int elemento);
  void imprimir();
};


#endif
