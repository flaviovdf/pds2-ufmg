#include "boost.h"

CartaBoost::CartaBoost(
  string nome,
  Carta to_boost,
  double boost
): Carta(nome, 0.0),
   _to_boost(to_boost), 
   _boost(boost) {
}

double CartaBoost::get_dano() {
  return _to_boost.get_dano() + _boost;
}