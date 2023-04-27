#ifndef PDS2_LIST_H_
#define PDS2_LIST_H_

struct no_t {
  int dados;
  no_t *prox;
};

namespace meu_std {
  class ListaEncadeada {
    private:
      unsigned int _tamanho;
      no_t *_inicio;
      no_t *_fim;
    public:
      ListaEncadeada();
      
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

      void remove(unsigned int pos);

      /* @brief Imprime a lista */
      void imprimir();
  };
}
#endif