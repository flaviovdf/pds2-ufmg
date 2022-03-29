#include <stdexcept>
#include <string>
#include <iostream>

std::string pega_sub_string(std::string str, int k) {
  return str.substr(k);
}

std::string le_entrada() {
  std::string texto;
  try {
    std::cin >> texto;
    return pega_sub_string(texto, 10);
  } catch (std::out_of_range &e) {
    std::cerr << "Entrada invalida!" << std::endl;
    return "";
  }
}

int main() {
  std::cout << le_entrada();
  return 0;
}
