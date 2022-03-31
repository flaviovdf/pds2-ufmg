#include "doctest.h"
#include "midia.h"
#include "item.h"

TEST_CASE("Testando o construtor") {
  Midia midia("Caes de Aluguel", 1, 2, Tipo::LANCAMENTO);
  CHECK_NOTHROW(Item(midia, 2, false));
}

TEST_CASE("Testando o getter do valor") {
  Midia midia("Caes de Aluguel", 1, 2, Tipo::LANCAMENTO);
  Item item(midia, 2, false);
  CHECK_EQ(item.get_valor(), 2);
}

TEST_CASE("Testando o endereco da midia (se foi passagem por ref)") {
  Midia midia("Caes de Aluguel", 1, 2, Tipo::LANCAMENTO);
  Item item(midia, 2, false);
  CHECK_EQ(midia.get_nome(), item.get_midia().get_nome());
}
