#include <initializer_list>

#include "forma.h"
#include "poligono.h"

Poligono::Poligono(cores_t cor, double lados...): Forma(cor) {
  std::initializer_list<double> lados_list { lados };

  if (lados_list.size() <= 2) {
    throw poligono_invalido_e();
  }

  for (double lado : lados_list) {
    _lados.push_back(lado);
  }
}


double Poligono::get_perimetro() {
  double soma = 0.0;
  for (double lado : _lados) {
    soma += lado;
  }
  return soma;
};