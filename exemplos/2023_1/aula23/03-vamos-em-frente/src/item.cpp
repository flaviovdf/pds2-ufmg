#include "item.h"

Item::Item(Midia &midia, bool compra):
  _midia(midia), _compra(compra) {}

Midia Item::get_midia() {
  return this->_midia;
}

double Item::_preco_serie() {
  if (this->foi_compra()) {
    return 12.0;
  } else {
    return 3.50;
  }
}

double Item::_preco_lancamento() {
  if (this->foi_compra()) {
    return 32.0;
  } else {
    return 16.00;
  }
}

double Item::_preco_normal() {
  if (this->foi_compra()) {
    return 15.0;
  } else {
    return 7;
  }
}

bool Item::foi_compra() {
  return this->_compra;
}

double Item::get_valor() {
  switch(this->_midia.get_tipo()) {
    case Tipo::EPISODIO_SERIE:
      return this->_preco_serie();
    case Tipo::LANCAMENTO:
      return this->_preco_lancamento();
    case Tipo::NORMAL:
      return this->_preco_normal();
  }
}
