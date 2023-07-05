#ifndef PDS2_UBER_POOL_H
#define PDS2_UBER_POOL_H

#include "uber.h"

class UberPool : public Uber {
  public:
    UberPool(
      std::string cor,
      unsigned int placa
    );
    double get_preco() override;
    unsigned int get_num_passageiros() override;
};

#endif