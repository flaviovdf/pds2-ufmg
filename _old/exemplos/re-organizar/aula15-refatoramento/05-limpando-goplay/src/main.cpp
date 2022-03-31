#include <iostream>
#include "goplay.h"

int main() {
  GoPlay goplay;
  int id_usuario = goplay.adicionar_usuario("Flavio Figueiredo");
  int ant = goplay.adicionar_lancamento("Ant Man and the Wasp");
  int patterson = goplay.adicionar_normal("Patterson");
  int midnight = goplay.adicionar_normal("Midnight Special");
  int bad = goplay.adicionar_serie("Breaking Bad S03E01");

  goplay.realiza_compra(id_usuario, ant);
  goplay.realiza_aluguel(id_usuario, patterson);
  goplay.realiza_aluguel(id_usuario, midnight);
  goplay.realiza_aluguel(id_usuario, bad);

  Usuario usuario = goplay.get_usuario(id_usuario);
  std::cout << usuario.total_gastos() << std::endl;
}
