#include "doctest.h"
#include "rainha.h"

TEST_CASE("Testando o construtor") {
  Rainha rainha = Rainha(2, 3);
  CHECK(rainha.get_x() == 2);
  CHECK(rainha.get_y() == 3);
}

TEST_CASE("Testando onde nao pode mover") {
  Rainha rainha = Rainha(2, 3);
  CHECK(rainha.pode_mover(0, 0) == false);
  CHECK(rainha.pode_mover(0, 3) == false);
  CHECK(rainha.pode_mover(2, 0) == false);
}

TEST_CASE("Testando onde pode mover") {
  Rainha rainha = Rainha(2, 3);
  CHECK(rainha.pode_mover(0, 3) == true);
  CHECK(rainha.pode_mover(0, 2) == true);
  CHECK(rainha.pode_mover(0, 1) == true);
}
