#ifndef PDS2_JOGADOR_H
#define PDS2_JOGADOR_H

#include <string>
#include <vector>

#include "carta.h"

/*
 * A classe Jogador guarda o nome, a mão
 * e os pontos do Jogador em um jogo de truco.
 * Esta classe não embaralha a mão!!
 * O usuário da mesma deve fazer isso antes
 * de construir Jogador.
 */
class Jogador {
  private:
    std::string _nome;
    unsigned int _pontos;
    std::vector<Carta> _mao;
  public:
    /*
     * @brief constrói o jogador mas sem embaralhar a mão
     */
    Jogador(std::string nome, std::vector<Carta> mao);
    
    /*
     * @brief pega quantos pontos o jogador tenho
     */
    unsigned int get_pontos();

    /*
     * @brief pega o nome do jogador
     */
    std::string get_nome();
};

#endif