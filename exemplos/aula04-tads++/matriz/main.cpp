#include "matriz.h"

int main(void) {
  // Alocando no heap
  Matriz *matriz = new Matriz(100, 100);
  delete matriz;

  // Alocando no stack
  Matriz matriz2(100, 100);
  return 0;
}
