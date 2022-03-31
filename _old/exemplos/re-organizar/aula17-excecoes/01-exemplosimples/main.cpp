#include <string>
#include <iostream>

int main() {
  std::string texto;
  std::cin >> texto;
  std::string sub = texto.substr(10);
  std::cout << sub;
  return 0;
}
