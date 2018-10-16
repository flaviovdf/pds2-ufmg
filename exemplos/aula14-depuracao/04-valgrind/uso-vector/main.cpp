#include <vector>

class Objeto {};

int main() {
  std::vector<Objeto *> v;
  Objeto *o = new Objeto();
  v.push_back(o);
}
