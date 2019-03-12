#ifndef PDS2_LISTA_VETOR_H
#define PDS2_LISTA_VETOR_H

#define TAMANHO_INICIAL 100


class ListaVetorInteiros {
private:
  int *_elementos;
  int _num_elementos;
  int _num_elementos_inseridos;
  int _capacidade;
public:
  ListaVetorInteiros();
  ~ListaVetorInteiros();
  void inserir_elemento(int elemento);
  void imprimir();
};


#endif
