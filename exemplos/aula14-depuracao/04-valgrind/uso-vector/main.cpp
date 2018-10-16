#include <vector>

class Objeto {};

int main() {
  std::vector<Objeto *> v;
  v.push_back(new Objeto());
}
