#ifndef PDS2_UBER_MOTO_H
#define PDS2_UBER_MOTO_H

#include <set>

#include "item.h"
#include "uber.h"

class UberMoto : public Uber {
  private:
    std::set<Item *> _bau;
  public:
    UberMoto(
      std::string cor,
      unsigned int placa,
      std::set<Item *> bau
    );
    unsigned int get_num_passageiros() override;
    double get_preco() override;
    unsigned int volume_bau();
};

#endif