#include <iostream>

#include "../include/lista_vetor.h"

int main() {
  ListaVetor v = ListaVetor();
  std::cout << v.tamanho() << std::endl;
  v.imprimir();

  v.insere_fim(7);
  std::cout << v.tamanho() << std::endl;
  v.imprimir();

  v.insere_fim(10);
  std::cout << v.tamanho() << std::endl;
  v.imprimir();

  v.insere_fim(90);
  std::cout << v.tamanho() << std::endl;
  v.imprimir();
  
  for (int i = 0; i < 27000; i++) {
    v.insere_fim(i + 3);
  }

  v.imprimir();

  return 0;
}