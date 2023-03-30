#include "caixa.h"

Caixa::Caixa(int peso): _peso(peso) {}

void Caixa::adicionar_caixa(Caixa &caixa) {
  _peso += caixa._peso;
}

void Caixa::adicionar_livro(Livro &livro) {
  _peso += livro.get_peso();
}

int Caixa::get_peso() {
  return _peso;
}