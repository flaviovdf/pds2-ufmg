#ifndef PDS2_CIRCULO_H
#define PDS2_CIRCULO_H

#include "formas.h"

class Circulo : public Forma {
  private:
    double _raio;
  public:
    Circulo(double raio);
    double get_perimetro() override;
};

#endif
