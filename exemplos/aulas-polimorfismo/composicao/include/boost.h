#ifndef PDS2_BOOST_H
#define PDS2_BOOST_H

#include <string> 

#include "carta.h"


using namespace std;

class CartaBoost : public Carta {
private:
  Carta _to_boost;
  double _boost;
public:
  CartaBoost(string nome,
             Carta to_boost,
             double boost);
  virtual double get_dano() override;
};

#endif