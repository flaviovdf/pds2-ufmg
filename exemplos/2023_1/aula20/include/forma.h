#ifndef PDS2_FORMA_H
#define PDS2_FORMA_H

enum cores_t {
  AZUL, VERDE, VERMELHO, AMARELO
};

class Forma {
  private:
    cores_t _cor;
  public:
    Forma(cores_t cor);
    cores_t get_cor();
    virtual double get_perimetro() = 0;
    // virtual double get_area() = 0;
};


#endif