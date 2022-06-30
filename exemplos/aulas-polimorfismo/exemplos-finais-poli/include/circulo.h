#ifndef PDS2_CIRC_H
#define PDS2_CIRC_H

#define PI 3.1414

#include "fig.h"

class Circulo : public TADFigGeometrica {
  private:
    double _raio;
  public:
    Circulo(Cor cor, double raio);
    virtual double get_area() override;
    virtual double get_perimetro() override;
};

#endif