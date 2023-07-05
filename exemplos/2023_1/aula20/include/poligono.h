#ifndef PDS2_POLIGONO_H
#define PDS2_POLIGONO_H

#include <vector>

#include "forma.h"

class poligono_invalido_e {};

class Poligono : public Forma {
  private:
    std::vector<double> _lados;
  public:
    Poligono(cores_t cor, double lados...);
    double get_perimetro() override;
};

#endif