#include "doctest.h"
#include "formas.h"


TEST_CASE("Testa Distancia") {
  ponto_t p = {2.0, 1.0};
  ponto_t p1 = {3.0, 1.0};
  CHECK_EQ(1.0, p.dist(p1));
}