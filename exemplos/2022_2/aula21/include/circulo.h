#ifndef PDS2_CIRC_H
#define PDS2_CIRC_H

#include "figura.h"

class Circulo : public FiguraAbstrata {
  private:
    double _raio;
  public:
    Circulo(
      std::string cor,
      double raio
    );
    virtual double area() override;
    virtual double perimetro() override;
};

#endif