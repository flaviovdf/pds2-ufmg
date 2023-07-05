#include "forma.h"

Forma::Forma(cores_t cor): _cor(cor) {}

cores_t Forma::get_cor() {
  return _cor;
}