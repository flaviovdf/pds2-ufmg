#include <iostream>

#include "uber_pool.h"

UberPool::UberPool(
  std::string cor, unsigned int placa): Uber(cor, placa) {
  std::cout << "Pool construida" << std::endl;
}

unsigned int UberPool::get_num_passageiros() {
  return 1;
}

double UberPool::get_preco() {
  return 12.35;
}

