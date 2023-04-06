#include <algorithm>
#include <random>
#include <vector>

#include "../include/baralho.h"
#include "../include/carta.h"


Baralho::Baralho() {
  for (int i = num::AS; i <= num::K; i++) {
    for (int j = 0; j <= 3; j++) {
      num nu = (num) i;
      naipe na = (naipe) j;

      Carta c = Carta(nu, na);
      _cartas.push_back(c);
    }
  }

  auto rng = std::default_random_engine {};
  std::shuffle(             // embaralhe
    std::begin(_cartas),    // da primeira
    std::end(_cartas),      // até a última
    rng
  );
}

Carta Baralho::remove_topo() {
  Carta c = _cartas[_cartas.size() - 1];
  _cartas.pop_back();
  return c;
}

std::vector<Carta> Baralho::remove_tres() {
  std::vector<Carta> cartas;
  for (int i = 0; i < 3; i++) {
    Carta c = remove_topo();
    cartas.push_back(c);
  }
  return cartas;
}
