#include <string>
#include <iostream>

std::string pega_sub_string(std::string str, int k) {
  return str.substr(k);
}

std::string le_entrada() {
  std::string texto;
  std::cin >> texto;
  return pega_sub_string(texto, 10);
}

int main() {
  std::cout << le_entrada();
  return 0;
}
