#include <iostream>

#include "../include/lista_encadeada.h"

int main() {
  meu_std::ListaEncadeada v = meu_std::ListaEncadeada();

  v.insere_fim(7);
  v.insere_fim(90);
  v.insere_fim(10);
  v.insere_fim(22);

  std::cout << v.tamanho() << std::endl;
  v.imprimir();
  std::cout << v.em(2) << std::endl;

  std::cout << "Removendo!!!" << std::endl;
  v.remove(0);
  v.imprimir();


  return 0;
}