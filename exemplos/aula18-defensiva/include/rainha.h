#ifndef PDS2_RAINHA_H
#define PDS2_RAINHA_H

#include "peca.h"

class Rainha : public Peca {
private:
  int _x, _y;
public:
  Rainha(int x, int y);
  virtual bool pode_mover(int x, int y);
  int get_x();
  int get_y();
};

#endif
