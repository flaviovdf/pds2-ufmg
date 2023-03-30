#include "peca.h"

Peca::Peca(
  TipoPeca tipo,
  unsigned int pos_x,
  unsigned int pos_y
) {
  _tipo = tipo;
  _pos_x = pos_x;
  _pos_y = pos_y;
  _aberto = false;
  _tem_bandeira = false;
};

void Peca::abrir() {
  if (!_aberto) {
    _aberto = true;
  }
}

void Peca::por_bandeira() {
  if (!_aberto) {
    _tem_bandeira = true;
  }
}

TipoPeca Peca::get_tipo() {
  return _tipo;
}