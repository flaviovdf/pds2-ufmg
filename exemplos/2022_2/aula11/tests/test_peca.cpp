#include "doctest.h"
#include "peca.h"

#define TAM 8

TEST_CASE("Testando se a peça branca tá ok sem ser borda") {
  Peca peca = Peca(Cor::BRANCO, 1, 1);
  CHECK_FALSE(peca.movimento_valido(0, 0, TAM));
  CHECK_FALSE(peca.movimento_valido(2, 1, TAM));
  CHECK_FALSE(peca.movimento_valido(2, 3, TAM));
  CHECK(peca.movimento_valido(2, 2, TAM));
  CHECK(peca.movimento_valido(2, 0, TAM));
}

TEST_CASE("Testando a borda para a peca branca") {
  Peca peca = Peca(Cor::BRANCO, 2, 0);
  CHECK_FALSE(peca.movimento_valido(2, -1, TAM));

  peca = Peca(Cor::BRANCO, 3, 7);
  CHECK_FALSE(peca.movimento_valido(4, 8, TAM));
}