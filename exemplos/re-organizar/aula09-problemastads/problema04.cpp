#include <iostream>
#include <map>
#include <sstream>
#include <string>

int main() {
  std::string linha;
  std::string palavra;
  std::istringstream stream_string;

  std::map<std::string, int> contagem;
  std::string termo;
  while (std::getline(std::cin, linha)) {
    if (linha == "sair")
      break;
    stream_string = std::istringstream(linha);
    while (std::getline(stream_string, termo, ' ')) {
      if (contagem.count(termo) == 0) { // 0 se não existe; 1 cc.
        contagem[termo] = 0;
      }
      contagem[termo] = contagem[termo] + 1;
    }
  }

  std::cout << std::endl;
  for (std::pair<std::string, int> pair : contagem) {
    std::cout << "Termo : " << pair.first << " Contagem: " << pair.second;
    std::cout << std::endl;
  }
}
