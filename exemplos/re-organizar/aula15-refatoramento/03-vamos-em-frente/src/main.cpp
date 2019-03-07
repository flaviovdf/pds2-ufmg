#include <iostream>
#include "goplay.h"

int main() {
  GoPlay goplay;
  int id_usuario = goplay.adicionar_usuario("Flavio Figueiredo");
  int ant = goplay.adicionar_midia("Ant Man and the Wasp", Tipo::LANCAMENTO);
  int patterson = goplay.adicionar_midia("Patterson", Tipo::NORMAL);
  int midnight = goplay.adicionar_midia("Midnight Special", Tipo::NORMAL);
  int bad = goplay.adicionar_midia("Breaking Bad S03E01", Tipo::EPISODIO_SERIE);

  goplay.realiza_compra(id_usuario, ant);
  goplay.realiza_aluguel(id_usuario, patterson);
  goplay.realiza_aluguel(id_usuario, midnight);
  goplay.realiza_aluguel(id_usuario, bad);

  Usuario usuario = goplay.get_usuario(id_usuario);
  std::cout << usuario.total_gastos() << std::endl;
}
