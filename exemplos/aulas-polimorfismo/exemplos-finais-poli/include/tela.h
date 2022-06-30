#ifndef PDS2_TELA_H
#define PDS2_TELA_H

#include <map>
#include <iostream>

#include "fig.h"

using namespace std;

class Tela {
  private:
    map<pair<double, double>, TADFigGeometrica *> _figuras;
  public:
    void insere_figura(double pos_x,
                       double pos_y,
                       TADFigGeometrica *fig);
    void imprime_tela();
};

#endif