#include <iostream>

#include "boost.h"
#include "carta.h"

using namespace std;

void imprime(Carta &carta) {
  cout << carta.get_nome() << " dano " << carta.get_dano() << endl;
}

int main() {
  Carta capeta = Carta("Capeta", 10);
  Carta anjo = Carta("Anjo", 12);

  imprime(capeta);
  
  CartaBoost boost_capeta = CartaBoost("Boost1", capeta, 3);
  CartaBoost boost_anjo = CartaBoost("Boost1", anjo, 3);
  
  imprime(boost_capeta);

  Carta boost_2 = CartaBoost("Boost2", boost_capeta, 2);
  CartaBoost &duvida1 = dynamic_cast<CartaBoost &>(capeta);
  CartaBoost &duvida2 = dynamic_cast<CartaBoost &>(boost_2);

  // delete boost_2;
  return 0;
}