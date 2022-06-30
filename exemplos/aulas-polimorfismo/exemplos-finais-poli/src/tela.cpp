#include "tela.h"
#include "fig.h"

void Tela::insere_figura(
  double pos_x,
  double pos_y,
  TADFigGeometrica *fig) 
{  
    pair<double, double> key(pos_x, pos_y);
    _figuras[key] = fig;
}

void Tela::imprime_tela() {
  for (auto atual : _figuras) {
    pair<double, double> key = atual.first;
    double pos_x = key.first;
    double pos_y = key.second;
    TADFigGeometrica *fig = _figuras.at(key);

    cout << "Na posicao: " << pos_x << " " << pos_y << endl;
    cout << "  figura da cor: " << fig->get_cor() << endl;
    cout << "  de area: " << fig->get_area() << endl;
  }
}
