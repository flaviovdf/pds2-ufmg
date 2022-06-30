#ifndef PDS2_PIKACHU_H
#define PDS2_PIKACHU_H

#include "pokemon.h"

class Pikachu : public Pokemon {
  public:
    virtual void fale() override;
};

#endif