
#include "circulo.h"
#include "fig.h"

Circulo::Circulo(
  Cor cor,
  double raio
): TADFigGeometrica(cor),
   _raio(raio) {
}

double Circulo::get_perimetro() {
  return 2 * PI * _raio;
}

double Circulo::get_area() {
  return PI * _raio * _raio;
}