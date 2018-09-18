#ifndef PDS2_LISTADUPLA_H
#define PDS2_LISTADUPLA_H


#include "colecao.h"


struct node_t {
  int elemento;
  node_t *anterior;
  node_t *proximo;
};


class ListaDuplamenteEncadeada : public ColecaoIF {
private:
  node_t *_inicio;
  node_t *_fim;
  int _num_elementos_inseridos;
public:
  ListaDuplamenteEncadeada();

  // Comportamento comum
  virtual ~ListaDuplamenteEncadeada();
  virtual void inserir_elemento(int elemento);
  virtual void imprimir();
  virtual int tamanho();

  // Específico
  void remove_iesimo(int i);
};


#endif
