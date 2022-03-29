#include "usuario.h"

Usuario::Usuario(std::string nome):
  _nome(nome) { }


void Usuario::inserir_item(Item item) {
  this->_midias.push_back(item);
}

double Usuario::total_gastos() {
  auto it = this->_midias.begin();
  auto ed = this->_midias.end();
  double total_gastos = 0.0;
  for (; it != ed; it++) {
    Item item = *it;
    total_gastos += item.get_valor();
  }
  return total_gastos;
}
