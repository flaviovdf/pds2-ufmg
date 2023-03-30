#ifndef PDS2_CARTAUNO_H
#define PDS2_CARTAUNO_H

namespace uno {
  enum Cor {AZUL, VERDE, AMARELO, VERMELHO};

  struct Carta {

    Cor _cor;
    int _numero;

    Carta(Cor cor, int numero);
    int get_numero() const;
    Cor get_cor() const;
  };
}

#endif
