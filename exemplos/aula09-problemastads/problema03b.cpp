#include <cstdio>
#include <iostream>
#include <vector>
#include <sstream>
#include <string>

std::vector<std::string> filtrar(const std::vector<std::string> &linhas,
                                 std::string termo) {
  std::vector<std::string> resposta;
  for (std::string linha : linhas) {
    if (linha.find(termo) == std::string::npos) {
      resposta.push_back(linha);
    }
  }
  return resposta;
}

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

  std::string termo;
  std::cout << "Digite o termo para filtrar" << std::endl;
  std::cin >> termo;

  std::vector<std::string> filtrado = filtrar(linhas, termo);
  for (std::string linha : filtrado) {
    std::cout << linha << std::endl;
  }
}
