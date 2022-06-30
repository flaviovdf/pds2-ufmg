#ifndef PDS2_QUADRADO_H
#define PDS2_QUADRADO_H

#include "fig.h"

class Quadrado : public TADFigGeometrica {
  private:
    double _lado;
  public:
    Quadrado(Cor cor, double lado);
    virtual double get_area() override;
    virtual double get_perimetro() override;
};

#endif