#include "frota.h"
#include <exception>

void Frota::adicionar_carro(Carro *carro) {
  _carros.push_back(carro);
}

Carro *Frota::alocar_carro() {
  if (_carros.empty()) {
    throw zero_carros_disponiveis_e();
  }

  Carro *alocado = _carros.back();
  _carros.pop_back();
  return alocado;
}