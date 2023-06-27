#ifndef PDS2_LISTA_VETOR_H
#define PDS2_LISTA_VETOR_H

#define TAMANHO_INICIAL 100

#include "lista.h"

class ListaVetor : public ListaIF {
  private:
    int *_elementos;
    int _num_elementos;
    int _num_elementos_inseridos;
    int _capacidade;
  public:
    ListaVetor();
    ~ListaVetor();

    virtual void inserir_elemento(int e) override;
    virtual void imprimir() override;
};


#endif
