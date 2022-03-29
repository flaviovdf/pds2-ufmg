#ifndef PDS2_ALUGUEL_H
#define PDS2_ALUGUEL_H


#include "midia.h"


class Item {
private:
  Midia &_midia;
  double _valor;
  bool _compra;
public:
  Item(Midia &_midia, double valor, bool compra);
  Midia get_midia();
  bool foi_compra();
  double get_valor();
};


#endif
