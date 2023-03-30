#include "tabuleiro.h"
#include "peca.h"

#include <vector>

Tabuleiro::Tabuleiro(
  unsigned int size_x,
  unsigned int size_y
) {
  _size_x = size_x;
  _size_y = size_y;
  for (int linha = 0; linha < size_x; linha++) {
    _pecas.push_back(vector<Peca>());
    for (int col = 0; col < size_y; col++) {
      _pecas[linha].push_back(Peca(TipoPeca::VAZIO, linha, col));
    }
  }
}

bool Tabuleiro::jogada(
  unsigned int pos_x,
  unsigned int pos_y
) {
  Peca peca = _pecas[pos_x][pos_y];
  if (peca.get_tipo() == TipoPeca::BOMBA) {
    return false;
  } else {
    _pecas[pos_x][pos_y].abrir();
    return true;
  }
}


