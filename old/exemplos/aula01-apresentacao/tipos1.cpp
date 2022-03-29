#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  double pi = 3.1415;
  cout << "Olá DCC :) ";
  cout << "O valor de pi é? ";
  cout << pi;
  cout << endl;
  cout << "E se eu quiser uma precisão menor? ";
  cout << setprecision(1) << pi;
  cout << endl;
  cout << "Pi ao quadrado com 7 precisao: " \
    << setprecision(7) << pow(pi, 2);
  return 0;
}
