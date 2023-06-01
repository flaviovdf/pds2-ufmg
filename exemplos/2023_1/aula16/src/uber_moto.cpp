#include <iostream>

#include "uber_moto.h"

UberMoto::UberMoto(
  std::string cor, unsigned int placa,
  std::set<Item *> bau
): Uber(cor, placa), _bau(bau) {
  std::cout << "Moto construida" << std::endl;
}

unsigned int UberMoto::get_num_passageiros() {
  return 1;
}

double UberMoto::get_preco() {
  return 9.25;
}


