#include <cmath>
#include <exception>

#include "busca.h"

BuscaUber::BuscaUber() {
  _carros_disponiveis = 2;
}

double BuscaUber::busca_rota(
  int lat, int longitude
) {
  if (abs(lat) > 90) {
    throw latitude_exception();
  }

  if (abs(longitude) > 180) {
    throw longitude_exception();
  }

  if (_carros_disponiveis <= 0) {
    throw sem_carro_exception();
  }

  _carros_disponiveis = _carros_disponiveis - 1;
  return 10.0;
}