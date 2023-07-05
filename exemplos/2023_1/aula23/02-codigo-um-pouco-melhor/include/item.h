#ifndef PDS2_ALUGUEL_H
#define PDS2_ALUGUEL_H


#include "midia.h"


class Item {
private:
  Midia &_midia;
  bool _compra;
public:
  Item(Midia &_midia, bool compra);
  Midia get_midia();
  bool foi_compra();

  double preco_serie();
  double preco_lancamento();
  double preco_normal();
};


#endif
