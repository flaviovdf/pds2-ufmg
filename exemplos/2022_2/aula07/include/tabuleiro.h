#ifndef PDS2_TABULEIRO_CM_H
#define PDS2_TABULEIRO_CM_H

#include <vector>

#include "peca.h"

using namespace std;

class Tabuleiro {
  private:
    unsigned int _size_x;
    unsigned int _size_y;
    vector<vector<Peca>> _pecas;
  public:
    Tabuleiro(
      unsigned int size_x,
      unsigned int size_y
    );
    bool jogada(
      unsigned int pos_x,
      unsigned int pos_y
    );
};

#endif