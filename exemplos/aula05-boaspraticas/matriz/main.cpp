#include "matriz.h"

int main(void) {
  Matriz *matriz = new Matriz(100, 100);
  delete matriz;

  Matriz matriz2(100, 100);
  return 0;
}
