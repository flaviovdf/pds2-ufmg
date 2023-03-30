#ifndef PDS2_PECA_CM_H
#define PDS2_PECA_CM_H

enum TipoPeca {
  BOMBA, VAZIO
};

class Peca {
  private:
    TipoPeca _tipo;
    unsigned int _pos_x;
    unsigned int _pos_y;
    bool _aberto;
    bool _tem_bandeira;
  public:
    Peca(
      TipoPeca tipo,
      unsigned int pos_x,
      unsigned int pos_y
    );
    void por_bandeira();
    void abrir();
    TipoPeca get_tipo();
};

#endif