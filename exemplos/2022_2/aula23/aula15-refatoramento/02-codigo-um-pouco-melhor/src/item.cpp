#include "item.h"

Item::Item(Midia &midia, bool compra):
  _midia(midia), _compra(compra) {}

Midia Item::get_midia() {
  return this->_midia;
}

bool Item::foi_compra() {
  return this->_compra;
}


double Item::preco_serie() {
  if (foi_compra()) {
    return 12.0;
  } else {
    return 3.50;
  }
}

double Item::preco_lancamento() {
  if (foi_compra()) {
    return 32.0;
  } else {
    return 16.00;
  }
}

double Item::preco_normal() {
  if (foi_compra()) {
    return 15.0;
  } else {
    return 7;
  }
}