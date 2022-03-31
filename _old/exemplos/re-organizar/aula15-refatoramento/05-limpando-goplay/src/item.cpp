#include "item.h"

Item::Item(Midia &midia, double valor, bool compra):
  _midia(midia), _valor(valor), _compra(compra) {}

Midia Item::get_midia() {
  return this->_midia;
}

double Item::get_valor() {
  return this->_valor;
}
