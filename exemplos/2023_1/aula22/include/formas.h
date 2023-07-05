#ifndef PDS2_FORMAS_H
#define PDS2_FORMAS_H

#include <cmath>

struct ponto_t {
  double x, y;

  double dist(ponto_t &p) {
    return sqrt(
      pow(x - p.x, 2) + pow(y - p.y, 2)
    );
  }
};

class Forma {
  public:
    virtual double get_perimetro() = 0;
};

#endif