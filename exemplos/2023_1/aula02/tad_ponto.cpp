#include <cmath>

struct ponto_t {
  double x;
  double y;
};

double distancia(ponto_t p1, ponto_t p2) {
  double dist = 0.0;
  dist += pow(p1.x - p2.x, 2);
  dist += pow(p1.y - p2.y, 2);
  return sqrt(dist);
}

int main() {
  ponto_t ponto_1 = {3.0, 2};
}