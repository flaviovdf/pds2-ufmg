#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include "formas.h"

enum tipo_triangulo_e {
  EQ, IS, ES
};

class Triangulo {
  private:
    ponto_t _x, _y, _z;
  public:
    Triangulo(
      ponto_t x, 
      ponto_t y, 
      ponto_t z
    );

    tipo_triangulo_e get_tipo();
};

#endif