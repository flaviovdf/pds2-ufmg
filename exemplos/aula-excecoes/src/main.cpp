#include <exception>
#include <iostream>

#include "tabuleiro.h"

using namespace std;

void realiza_jogada(Tabuleiro &tab) {
  int x;
  int y;
  bool esq;
  std::cout << "Indique sua jogada: (x, y, esq|dir) " << std::endl;
  std::cin >> x;
  std::cin >> y;
  std::cin >> esq;
  tab.movimenta(x, y, esq);
}

int main() {
  Tabuleiro tab = Tabuleiro();
  tab.imprime();
  while (true) {
    try {
      realiza_jogada(tab);
      tab.imprime();
    } catch (ErroDeJogoException &e) {
      std::cout << "Jogada Invalida!" << std::endl;
      std::cout << e.what();
    }
  }
  return 0;
}