#include "usuario.h"

Usuario::Usuario(std::string nome):
  _nome(nome) { }


void Usuario::inserir_item(Item item) {
  this->_midias.push_back(item);
}

double Usuario::_preco_serie(Item &item) {
  if (item.foi_compra()) {
    return 12.0;
  } else {
    return 3.50;
  }
}

double Usuario::_preco_lancamento(Item &item) {
  if (item.foi_compra()) {
    return 32.0;
  } else {
    return 16.00;
  }
}

double Usuario::_preco_normal(Item &item) {
  if (item.foi_compra()) {
    return 15.0;
  } else {
    return 7;
  }
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
        total_gastos += this->_preco_serie(item);
        break;
      case Tipo::LANCAMENTO:
        total_gastos += this->_preco_lancamento(item);
        break;
      case Tipo::NORMAL:
        total_gastos += this->_preco_normal(item);
        break;
    }
  }
  return total_gastos;
}
