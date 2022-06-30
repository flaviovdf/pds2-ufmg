#include "carta.h"

Carta::Carta(
  string nome,
  double dano
): _nome(nome), _dano(dano) { 
}

string Carta::get_nome() {
  return _nome;
}

double Carta::get_dano() {
  return _dano;
}