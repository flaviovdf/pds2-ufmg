#include "circulo.h"
#include "fig.h"
#include "quadrado.h"
#include "tela.h"

int main() {
  Quadrado quad1 = Quadrado(Cor::AZUL, 2);
  Circulo circ1 = Circulo(Cor::AZUL, 2);
  Quadrado quad2 = Quadrado(Cor::VERMELHO, 3);

  Tela tela = Tela();
  tela.insere_figura(0, 0, &quad1);
  tela.insere_figura(1, 0, &circ1);
  tela.insere_figura(1, 1, &quad2);

  tela.imprime_tela();
  
  return 0;
}