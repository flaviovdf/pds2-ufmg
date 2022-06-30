#include "doctest.h"
#include "fmat.h"
#include <exception>


TEST_CASE("testa fatorial casos negativos") {
  CHECK_THROWS_AS(fatorial(-1), std::exception);
  CHECK_THROWS_AS(fatorial(-20), std::exception);
}

TEST_CASE("testa fatorial casos positivos") {
  CHECK_EQ(1, fatorial(0));
  CHECK_EQ(1, fatorial(1));
  CHECK_EQ(24, fatorial(4));
  CHECK_EQ(120, fatorial(5));
}


TEST_CASE("testar os triangulos chamadas positivas") {
  CHECK_EQ(TipoTriangulo::EQ, verifica_tipo(1, 1, 1));
  CHECK_EQ(TipoTriangulo::IS, verifica_tipo(1, 1, 2));
  CHECK_EQ(TipoTriangulo::IS, verifica_tipo(1, 2, 1));
  CHECK_EQ(TipoTriangulo::IS, verifica_tipo(2, 1, 1));
  CHECK_EQ(TipoTriangulo::ES, verifica_tipo(1, 2, 3));
}

TEST_CASE("testar os triangulos chamadas negativo") {
  CHECK_THROWS_AS(verifica_tipo(0, 1, 1), std::exception);
  CHECK_THROWS_AS(verifica_tipo(1, 0, 2), std::exception);
  CHECK_THROWS_AS(verifica_tipo(1, 2, 0), std::exception);
  CHECK_THROWS_AS(verifica_tipo(-2, 1, 1), std::exception);
  CHECK_THROWS_AS(verifica_tipo(1, -2, 3), std::exception);
  CHECK_THROWS_AS(verifica_tipo(1, 2, -3), std::exception);
}