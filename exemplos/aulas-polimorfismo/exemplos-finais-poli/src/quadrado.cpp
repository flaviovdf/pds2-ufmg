#include "quadrado.h"
#include "fig.h"
#include "quadrado.h"

Quadrado::Quadrado(
  Cor cor,
  double lado
): TADFigGeometrica(cor),
   _lado(lado) {
}

double Quadrado::get_area() {
  return _lado * _lado;
}

double Quadrado::get_perimetro() {
  return 4 * _lado;
}