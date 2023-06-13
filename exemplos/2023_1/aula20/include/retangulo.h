#ifndef PDS2_RETANGULO_H
#define PDS2_RETANGULO_H

#include "poligono.h"

class Retangulo : public Poligono {
  public:
    Retangulo(
      cores_t cor,
      double base,
      double altura
    );
};

#endif