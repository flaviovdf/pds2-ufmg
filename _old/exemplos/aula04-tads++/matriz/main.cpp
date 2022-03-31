#include <iostream>

#include "matriz.h"

int main(void) {
  Matriz m1(2, 2);
  Matriz m2(2, 2);

  std::cout << m1.valor(0, 0) << std::endl;
  std::cout << m2.valor(0, 0) << std::endl;

  m1.seta(0, 0, 1);
  std::cout << m1.valor(0, 0) << std::endl;

  m2.seta(0, 0, 2);
  std::cout << m2.valor(0, 0) << std::endl;

  Matriz m3 = m1.soma(m2);
  std::cout << m3.valor(0, 0) << std::endl;

  // Exemplo destrutores abaixo
  // Alocando no heap
  // Matriz *matriz = new Matriz(100, 100);
  // delete matriz;

  // Alocando no stack
  // Matriz matriz2(100, 100);
  // return 0;
}
