#include <cmath>

#include "circulo.h"

Circulo::Circulo(double raio): _raio(raio) {}

double Circulo::get_perimetro() {
  return 2 * M_PI * _raio;
}