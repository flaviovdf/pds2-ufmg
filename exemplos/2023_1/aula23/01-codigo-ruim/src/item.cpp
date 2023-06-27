#include "item.h"

Item::Item(Midia &midia, bool compra):
  _midia(midia), _compra(compra) {}

Midia Item::get_midia() {
  return this->_midia;
}

bool Item::foi_compra() {
  return this->_compra;
}
