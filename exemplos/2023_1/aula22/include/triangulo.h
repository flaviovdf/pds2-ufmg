#ifndef PDS2_TRIANGULO_H
#define PDS2_TRIANGULO_H

#include "formas.h"

enum tipo_triangulo_e {
  EQ, IS, ES
};

class Triangulo : public Forma {
  private:
    ponto_t _x, _y, _z;
  public:
    Triangulo(
      ponto_t x, 
      ponto_t y, 
      ponto_t z
    );
    double get_perimetro() override;
    tipo_triangulo_e get_tipo();
};

#endif