#include <iostream>

#include "lista_vetor.h"

int main() {
  ListaVetor lv = ListaVetor();
  for (int j = 0; j < 30; j++) {
    lv.insere(j);
  }

  for (unsigned int i = 0; i < lv.tamanho(); i++) {
    std::cout << lv.na(i) << std::endl;
  }

  return 0;
}
