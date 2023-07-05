#include <iostream>

#include "uber.h"


Uber::Uber(
  std::string cor, unsigned int placa
): _cor(cor), _placa(placa) {
  std::cout << "Uber construido" << std::endl;
}

unsigned int Uber::get_placa() {
  return _placa;
}

std::string Uber::get_cor() {
  return _cor;
}

double Uber::get_preco() {
  return 20.5;
}

unsigned int Uber::get_num_passageiros() {
  return 4;
}