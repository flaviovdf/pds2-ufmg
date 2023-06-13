#include <exception>

#include "circulo.h"
#include "forma.h"
#include "poligono.h"
#include "triangulo.h"

void draw(Forma &f) {
  try {
    Poligono p = dynamic_cast<Poligono &>(f);
  } catch(std::bad_cast &e) {
    Circulo c = dynamic_cast<Circulo &>(f);
  }
}

int main() {
  Circulo circ = Circulo(cores_t::AMARELO, 3.0);
  Poligono pol = Poligono(cores_t::AZUL, 1.0, 2.0, 3.0, 1.0);
  Triangulo tri = Triangulo(cores_t::VERDE, 2, 1, 3);

  draw(circ);
  draw(pol);
  draw(tri);
}