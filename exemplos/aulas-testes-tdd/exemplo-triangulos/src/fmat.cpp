#include "fmat.h"
#include <exception>

int fatorial(int n) {
  if (n < 0) {
    throw std::exception();
  }
  int resultado = 1;
  for (int i = 2; i < n; i++) {
    resultado *= i;
  }
  return resultado;
}

TipoTriangulo verifica_tipo(
  int size_l1,
  int size_l2,
  int size_l3
) {
  if ((size_l1 <= 0) || (size_l2 <= 0) || (size_l3 <= 0)) {
    throw std::exception();
  }
  if ((size_l1 == size_l2) && (size_l1 != size_l3)) {
    return TipoTriangulo::IS;
  }
  if ((size_l1 == size_l3) && (size_l1 != size_l2)) {
    return TipoTriangulo::IS;
  }
  if ((size_l3 == size_l2) && (size_l3 != size_l1)) {
    return TipoTriangulo::IS;
  }
  if ((size_l1 != size_l2) && (size_l1 != size_l3)) {
    return TipoTriangulo::ES;
  }
  return TipoTriangulo::EQ;
}