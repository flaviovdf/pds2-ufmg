#include "triangulo.h"
#include "forma.h"
#include "poligono.h"

Triangulo::Triangulo(
  cores_t cor,
  double aresta_base,
  double aresta_dir,
  double aresta_esq
): Poligono(cor, aresta_base, aresta_dir, aresta_esq) {}