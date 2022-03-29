#ifndef PDS2_BST_H
#define PDS2_BST_H

#include "colecao.h"
#include "node.h"


class BST : public ColecaoIF {
private:
  Node *_raiz;
  int _num_elementos_inseridos;
public:
  BST();

  // Comportamento comum
  virtual ~BST();
  virtual void inserir_elemento(int elemento);
  virtual void imprimir();
  virtual int tamanho();

  // Específico
  bool tem_elemento(int elemento);
};


#endif
