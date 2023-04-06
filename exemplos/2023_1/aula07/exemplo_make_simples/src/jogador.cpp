#include "../include/jogador.h"

Jogador::Jogador(
  std::string nome,
  std::vector<Carta> mao
) {
  _nome = nome;
  _mao = mao;
}

std::string Jogador::get_nome() {
  return _nome;
}

unsigned int Jogador::get_pontos() {
  return _pontos;
}