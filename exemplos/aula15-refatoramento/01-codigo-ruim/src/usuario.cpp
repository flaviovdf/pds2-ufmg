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
          if (item.foi_compra()) {
            total_gastos += 12.0;
          } else {
            total_gastos += 3.50;
          }
        break;
      case Tipo::LANCAMENTO:
          if (item.foi_compra()) {
            total_gastos += 32.0;
          } else {
            total_gastos += 16.00;
          }
        break;
      case Tipo::NORMAL:
          if (item.foi_compra()) {
            total_gastos += 15.0;
          } else {
            total_gastos += 7;
          }
        break;
    }
  }
  return total_gastos;
}
