#include "doctest.h"
#include "peao.h"

TEST_CASE("Testando o Construtor") {
  Peao peao(2, 3);
  CHECK(peao.get_x() == 2);
  CHECK(peao.get_y() == 3);
}
