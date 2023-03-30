#ifndef PDS2_CAIXA_H
#define PDS2_CAIXA_H

#include "livro.h"

class Caixa {
  private:
    int _peso;
  public:
    Caixa(int peso);
    void adicionar_caixa(Caixa &caixa);
    void adicionar_livro(Livro &livro);
    int get_peso();
};

#endif