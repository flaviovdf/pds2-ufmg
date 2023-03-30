#include <iostream>

int main() {
  double inicio = 4.0;
  double fim = 6.8;

  unsigned int resposta = 0;
  for (int i = inicio; i <= fim; i++) {
    resposta++;
  }
  std::cout << resposta << std::endl;
}
