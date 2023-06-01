#include <iostream>

#include "uber.h"
#include "uber_moto.h"
#include "uber_pool.h"

void print_uber(Uber &uber) {
  std::cout << uber.get_cor() << std::endl; 
  std::cout << uber.get_placa() << std::endl; 
  std::cout << uber.get_preco() << std::endl; 
  std::cout << uber.get_num_passageiros() << std::endl;
  std::cout << std::endl;
}

int main() {
  Uber uber_normal = Uber("vermelha", 1);
  print_uber(uber_normal);

  std::set<Item *> bau = {new Item(), new Item(), new Item()};
  UberMoto uber_moto = UberMoto("azul", 2, bau);
  print_uber(uber_moto);

  uber_moto.volume_bau();

  Uber *moto_como_normal = &uber_moto;
  UberPool *pool = new UberPool("cinza", 7);
  UberMoto *normal_como_moto = \
    dynamic_cast<UberMoto *>(moto_como_normal);


  UberPool uber_pool = UberPool("verde", 3);
  print_uber(uber_pool);

  for (Item *i : bau) {
    delete i;
  }
}