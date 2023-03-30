#include "usuario.h"

Usuario::Usuario(std::string nome):
  _nome(nome) { }


void Usuario::inserir_item(Item item) {
  this->_midias.push_back(item);
}

double Usuario::total_gastos() {
  std::vector<Item>::iterator it = this->_midias.begin();
  std::vector<Item>::iterator ed = this->_midias.end();
  double total_gastos = 0.0;
  for (; it != ed; it++) {
    Item item = *it;
    Midia midia = item.get_midia();
    switch(midia.get_tipo()) {
      case Tipo::EPISODIO_SERIE:
        total_gastos += item.preco_serie();
        break;
      case Tipo::LANCAMENTO:
        total_gastos += item.preco_lancamento();
        break;
      case Tipo::NORMAL:
        total_gastos += item.preco_normal();
        break;
    }
  }
  return total_gastos;
}
