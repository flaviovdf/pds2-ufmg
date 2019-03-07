#ifndef PDS2_CARTAUNO_H
#define PDS2_CARTAUNO_H

namespace uno {
  enum Cor {AZUL, VERDE, AMARELO, VERMELHO};

  class Carta {
  private:
    Cor _cor;
    int _numero;
  public:
    Carta(Cor cor, int numero);
    int get_numero() const;
    Cor get_cor() const;
  };
}

#endif
