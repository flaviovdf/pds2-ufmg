#include "doctest.h"
#include "fatorial.h"

TEST_CASE("Testando caso especial") {
  CHECK(fatorial(0) == 1);
}

TEST_CASE("Testando alguns casos simples") {
  CHECK(fatorial(2) == 2);
  CHECK(fatorial(3) == 6);
}

TEST_CASE("Testando com base em uma tabela") {
  int tabela[] = {1, 1, 2, 6, 24, 120};
  for (int i = 0; i < 6; i++) {
    CHECK(fatorial(i) == tabela[i]);
  }
}

TEST_CASE("Testando negativo") {
   CHECK_THROWS(fatorial(-2));
}
