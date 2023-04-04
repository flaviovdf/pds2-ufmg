#ifndef PDS2_BARALHO_H
#define PDS2_BARALHO_H

#include <vector>

#include "../include/carta.h"

class Baralho {
  private:
    std::vector<Carta> _cartas;
  public:
    /*
     * @brief constrói e embaralha as cartas
     */
    Baralho();

    /*
     * @brief remove a carta do topo
     */
    Carta remove_topo();

    std::vector<Carta> remove_tres();
};

#endif