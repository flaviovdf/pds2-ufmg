#ifndef PDS2_FROTA_H
#define PDS2_FROTA_H

#include <vector>

#include "carro.h"

class zero_carros_disponiveis_e {};

class Frota {
  private:
    std::vector<Carro*> _carros;
  public:
    void adicionar_carro(Carro* carro);
    Carro* alocar_carro();
};

#endif