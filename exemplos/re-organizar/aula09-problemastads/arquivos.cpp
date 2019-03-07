#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
  std::ifstream entrada("nome_do_arquivo.txt");
  std::string linha;
  while (std::getline(entrada, linha)) {
    if (linha == "sair")
      break;
    // . . .
  }
  // . . .
  entrada.close();
}
