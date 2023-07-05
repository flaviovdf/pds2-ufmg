#include "item.h"

Item::Item(Midia &midia, bool compra):
  _midia(midia), _compra(compra) {}

Midia Item::get_midia() {
  return this->_midia;
}

double Item::get_valor() {
  if (_compra) {
    return _midia.get_preco_compra();
  } else {
    return _midia.get_preco_aluguel();
  }
}
