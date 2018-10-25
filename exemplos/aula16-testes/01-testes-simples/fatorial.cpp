#include <stdexcept>

#include "fatorial.h"

int fatorial(int n) {
  if (n < 0) {
    throw std::invalid_argument("Não existe fatorial de valores negativos");
  }
  if (n <= 1) {
    return 1;
  }
  return n * fatorial(n-1);
}
