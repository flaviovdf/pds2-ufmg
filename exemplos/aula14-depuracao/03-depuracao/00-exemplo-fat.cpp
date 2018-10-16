#include <iostream>
#include <cmath>

int fatorial(int num) {
  int fat = 1;
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
