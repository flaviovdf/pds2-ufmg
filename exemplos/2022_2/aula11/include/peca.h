#ifndef PDS2_PECA_H
#define PDS2_PECA_H

enum Cor {
  PRETO, BRANCO
};

class Peca {
  private:
    unsigned int _linha;
    unsigned int _col;
    Cor _cor;
    bool _eh_rainha;
  public:
    Peca(
      Cor cor, unsigned int linha, unsigned int col
    );
    bool movimento_valido(
      unsigned int nova_linha, unsigned int nova_col, unsigned int tam
    );
};

#endif