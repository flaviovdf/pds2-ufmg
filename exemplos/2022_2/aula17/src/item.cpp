#include "item.h"

Item::Item(int peso) {
  _peso = peso;
}

int Item::get_peso() {
  return _peso;
}