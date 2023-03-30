#include <iostream>
#include <string>

#include "peca.h"
#include "tabuleiro.h"

using namespace std;

int main() {
  Tabuleiro tabuleiro = Tabuleiro(10, 10);
  string sair;
  unsigned int pos_x, pos_y;
  while (true) {
    cout << "Digite se quer sair: " << endl;
    cin >> sair;
    if (sair == "sair") {
      break;
    } else {
      cin >> pos_x;
      cin >> pos_y;
      tabuleiro.jogada(pos_x, pos_y);
    }
  }
  return 0;
}



