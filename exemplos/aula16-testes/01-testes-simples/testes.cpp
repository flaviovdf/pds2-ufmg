#include "doctest.h"
#include "fatorial.h"

TEST_CASE("Testando o caso especial") {
  CHECK(fatorial(0) == 1);
}

TEST_CASE("Testando o fatorial geral") {
  CHECK(fatorial(2) == 2);
  CHECK(fatorial(3) == 6);
  CHECK(fatorial(4) == 24);
  CHECK(fatorial(10) == 3628800);
}

//TEST_CASE("Testando o caso invalido") {
//  CHECK_THROWS(fatorial(-1));
//}
