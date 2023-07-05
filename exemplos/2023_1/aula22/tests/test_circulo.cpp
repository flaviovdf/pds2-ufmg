#include <cmath>

#include "circulo.h"
#include "doctest.h"

TEST_CASE("Testa o Perimetro do Circulo") {
  Circulo c = Circulo(3.2);
  CHECK_EQ(6.4 * M_PI, c.get_perimetro());
}