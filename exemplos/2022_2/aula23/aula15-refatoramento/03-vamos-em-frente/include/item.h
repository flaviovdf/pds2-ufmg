#ifndef PDS2_ALUGUEL_H
#define PDS2_ALUGUEL_H


#include "midia.h"


class Item {
private:
  Midia &_midia;
  bool _compra;
  double _preco_serie();
  double _preco_lancamento();
  double _preco_normal();
public:
  Item(Midia &_midia, bool compra);
  Midia get_midia();
  bool foi_compra();
  double get_valor();
};


#endif
