#include "usuario.h"

Usuario::Usuario(std::string nome):
  _nome(nome) { }


void Usuario::inserir_item(Item item) {
  this->_midias.push_back(item);
}

double Usuario::total_gastos() {
  double total_gastos = 0.0;
  for (Item item : _midias) {
    total_gastos += item.get_valor();
  }
  return total_gastos;
}
