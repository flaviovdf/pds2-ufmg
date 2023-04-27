#ifndef PDS2_LISTA_VETOR_H
#define PDS2_LISTA_VETOR_H

class ListaVetor {
  private:
    unsigned int _buf_tam;
    unsigned int _tam;
    int *_dados;
  public:
    ListaVetor();

    /*
     * @brief Insere um elemento no fim
     *        da lista.
     */
    void insere_fim(int elemento);
    
    /*
     * @brief Pega o tamanho da lista.
     *        Sempre começa com zero.
     */
    unsigned int tamanho();

    /*
     * @brief Retorna o elemento da lista na posição
     *        dada. Se a lista for [3, 2, 3]. em(2) = 3.
     *        em(0) = 3; em(1) = 2.
     */
    int em(unsigned int pos);

    /* @brief Imprime a lista */
    void imprimir();
};

#endif