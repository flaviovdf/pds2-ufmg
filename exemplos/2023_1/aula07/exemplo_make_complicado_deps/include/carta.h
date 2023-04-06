#ifndef PDS2_CARTA_H
#define PDS2_CARTA_H

enum num {
  AS, N2, N3, N4, N5, N6, N7, N8, N9, N10, J, Q, K
};

enum naipe {
  COPAS, ESPADAS, OURO, PAUS
};


/*
 * A classe carta cuida de representar
 * uma carta do baralho padrão. Fazemos
 * uso de enums para garantir que nunca
 * seja inválida.
 */
class Carta {
  private:
    num _numero;
    naipe _naipe;
  public:
    /*
     * @brief Constrói uma carta
     */
    Carta(num numero, naipe naipe);

    /*
     * @brief Pega o número
     */
    num get_numero();

    /*
     * @brief Pega o naipe
     */
    naipe get_naipe();
};




#endif