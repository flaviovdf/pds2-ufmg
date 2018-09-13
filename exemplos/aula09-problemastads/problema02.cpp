#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

int main() {
  std::string linha;
  std::string palavra;
  std::istringstream stream_string;

  std::vector<std::string> linhas;

  while (std::getline(std::cin, linha)) {
    if (linha == "sair") // 2. Se o usuário digitar sair, quebra o laço
      break;
    linhas.push_back(linha);
  }
  // . . .
}
