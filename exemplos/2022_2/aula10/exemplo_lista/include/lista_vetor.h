#ifndef PDS2_LISTA_VETOR_H
#define PDS2_LISTA_VETOR_H

class ListaVetor {
  private:
    int *_dados;
    unsigned int _tam;
    unsigned int _max;
  public:
    ListaVetor();
    ~ListaVetor();
    void insere(int elemento);
    void remove_ultimo();
    int na(unsigned int pos);
    unsigned int tamanho();
};

#endif
