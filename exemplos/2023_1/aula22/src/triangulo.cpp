#include <iostream>
#include <cmath>

#include "triangulo.h"
#include "formas.h"


Triangulo::Triangulo(
  ponto_t x, ponto_t y, ponto_t z
) {
  _x = x;
  _y = y;
  _z = z;
}

tipo_triangulo_e Triangulo::get_tipo() {
  double d_xy = sqrt(pow(_x.x - _y.x, 2) + pow(_x.y - _y.y, 2)); 
  double d_xz = sqrt(pow(_x.x - _z.x, 2) + pow(_x.y - _z.y, 2));
  double d_yz = sqrt(pow(_z.x - _y.x, 2) + pow(_z.y - _y.y, 2));

  if ((fabs(d_xy - d_xz) < 1e-8) && (fabs(d_xz - d_yz) < 1e-8)) {
    return EQ;
  }

  if ((d_xy == d_xz) || (d_xz == d_yz) || (d_xy == d_yz)) {
    return IS;
  }

  return ES;
}

double Triangulo::get_perimetro() {
  double d_p1_p2 = _x.dist(_y);
  double d_p1_p3 = _x.dist(_z);
  double d_p2_p3 = _y.dist(_z);
  
  return d_p1_p2 + d_p1_p3 + d_p2_p3;
}
