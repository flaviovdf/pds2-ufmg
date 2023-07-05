#include <cmath>

#include "circulo.h"

Circulo::Circulo(
  cores_t cor,
  double raio
): Forma(cor), _raio(raio) { }

double Circulo::get_perimetro() {
  return 2.0 * M_PI * _raio;
}