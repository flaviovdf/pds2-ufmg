#include <cstdio>
#include <iostream>
#include <list>
#include <sstream>
#include <string>

int main() {
  std::string linha;
  std::string palavra;
  std::istringstream stream_string;

  std::list<std::string> linhas;

  while (std::getline(std::cin, linha)) {
    if (linha == "sair") // 2. Se o usuário digitar sair, quebra o laço
      break;
    linhas.push_back(linha);
  }

  std::string termo;
  std::cout << "Digite o termo para filtrar" << std::endl;
  std::cin >> termo;

  std::list<std::string>::iterator it = linhas.begin();
  while (it != linhas.end()) {
    linha = *it;
    int posicao = linha.find(termo);
    if (posicao != std::string::npos)
      linhas.erase(it);
    it++;
  }

  for (std::string linha : linhas) {
    std::cout << linha << std::endl;
  }
}
