#include "peca.h"

Peca::Peca(
  Cor cor, unsigned int linha, unsigned int col
) {
  _cor = cor;
  _linha = linha;
  _col = col;
}

bool Peca::movimento_valido(
  unsigned int nova_linha, unsigned int nova_col, unsigned int tam
) {
  if (_cor == Cor::BRANCO) {
    bool ok = nova_linha == _linha + 1;
    ok = ok && (nova_col == _col - 1 || nova_col == _col + 1);
    ok = ok && (nova_col < tam);
    return ok;
  }
  return false;
}