#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include "poligono.h"

class Triangulo : public Poligono {
  public:
    Triangulo(
      cores_t cor,
      double aresta_base,
      double aresta_esq,
      double aresta_dir
    );
};

#endif