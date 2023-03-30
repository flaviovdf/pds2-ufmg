#include <exception>
#include <iostream>
#include <ostream>
#include <string>

#include "include/busca.h"

int main() {
  BuscaUber bu = BuscaUber();
  int lat;
  int longitude;

  try {
    std::cout << "Digite a lat: ";
    std::cin >> lat;

    std::cout << "Digite a long: ";
    std::cin >> longitude;

    bu.busca_rota(lat, longitude);
    bu.busca_rota(lat, longitude);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  // } catch (const longitude_exception &e) {
  //   std::cout << "Erro de longitude" << std::endl;
  // } catch (const sem_carro_exception &e) {
  //   std::cout << "Erro de sem carro" << std::endl;
  // }
  // bu.busca_rota(lat, longitude);
}