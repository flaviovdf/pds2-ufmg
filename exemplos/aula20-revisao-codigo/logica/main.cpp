
#include <iostream>
#include <cmath>

int fatorial(int num) {
  int fat = 0;
  for (int i = 1; i <= num; i++)
    fat = fat * i;
  return fat;
}

double series(double x, int n) {
  double valor = 0.0;
  double xpow = 1;
  for (int k = 0; k <= n; k++) {
    valor += xpow / fatorial(k);
    xpow = xpow * x;
  }
  return valor;
}

int main() {
  std::cout << "Digite o valor de x: ";
  double x = 0.0;
  std::cin >> x;

  int n = 0;
  std::cout << std::endl << "Digite o valor de n : " ;
  std::cin >> n;
  std::cout << std::endl;

  double valor = series(x, n);
  std::cout << "Resultado " << valor << std::endl;
  return 0;
}
