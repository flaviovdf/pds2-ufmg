#ifndef PDS2_FIG_H
#define PDS2_FIG_H

enum Cor {
  VERMELHO, VERDE, AZUL
};

class TADFigGeometrica {
  private:
    Cor _cor;
  public:
    TADFigGeometrica(Cor cor);
    virtual double get_area() = 0;
    virtual double get_perimetro() = 0;
    Cor get_cor();
};

#endif