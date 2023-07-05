#ifndef PDS2_LISTADUPLA_H
#define PDS2_LISTADUPLA_H

#include "lista.h"

struct node_t {
  int elemento;
  node_t *anterior;
  node_t *proximo;
};

class ListaDuplamenteEncadeada : public ListaIF {
  private:
    node_t *_inicio;
    node_t *_fim;
    int _num_elementos_inseridos;
  public:
    ListaDuplamenteEncadeada();
    ~ListaDuplamenteEncadeada();

    virtual void inserir_elemento(int e) override;
    virtual void imprimir() override;
    void remove_iesimo(int i);
};


#endif
