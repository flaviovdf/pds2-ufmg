#include <iostream>
#include <stdexcept>

int fatorial(int n) {
  if (n < 0) {
    throw std::invalid_argument("Não existe fatorial de n < 0");
  }
  if (n >= 20) {
    throw std::overflow_error("Não consigo computar para n>=20");
  }
  if (n <= 1) {
    return 1;
  }
  return n * fatorial(n-1);
}

int main() {
  try {
    std::cout << fatorial(20);
  } catch (std::invalid_argument &e) {
    std::cout << e.what();
  } catch (std::overflow_error &e) {
    std::cout << e.what();
  }
}
