#ifndef PDS2_CIRCULO_H
#define PDS2_CIRCULO_H

#include "forma.h"

class Circulo : public Forma {
  private:
    double _raio;
  public:
    Circulo(
      cores_t cor,
      double raio
    );
    double get_perimetro() override;
};

#endif