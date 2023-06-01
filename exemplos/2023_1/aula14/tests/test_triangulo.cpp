#include <cmath>
#include "doctest.h"

#include "formas.h"
#include "triangulo.h"

TEST_CASE("Testa o isoceles") {
  Triangulo t = Triangulo(
    ponto_t {0, 0},
    ponto_t {0, 1},
    ponto_t {1, 1} 
  );
  CHECK_EQ(tipo_triangulo_e::IS, t.get_tipo());
}

TEST_CASE("Testa o equilatero") {
  Triangulo t = Triangulo(
    ponto_t {0, 0},
    ponto_t {1, 0},
    ponto_t {0.5, sqrt(3) / 2.0} 
  );
  CHECK_EQ(tipo_triangulo_e::EQ, t.get_tipo());
}

TEST_CASE("Testa o escaleno") {
  Triangulo t = Triangulo(
    ponto_t {0, -7},
    ponto_t {1, 3},
    ponto_t {0.5, sqrt(3) / 2.0} 
  );
  CHECK_EQ(tipo_triangulo_e::ES, t.get_tipo());
}


