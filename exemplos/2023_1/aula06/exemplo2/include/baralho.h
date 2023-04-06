#ifndef PDS2_BARALHO_H
#define PDS2_BARALHO_H

#include <vector>

#include "../include/carta.h"

/*
 * A classe Baralho cuida da nossa pilha de cartas.
 * Internamente, usamos um `std::vector` para guardar
 * tais cartas. Com essa classe, você pode remover cartas
 * do topo do baralho. Ao construir a classe, as cartas
 * j
 */
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
    
    /*
     * @brief remove três cartas para iniciar o jogo
     */
    std::vector<Carta> remove_tres();
};

#endif
