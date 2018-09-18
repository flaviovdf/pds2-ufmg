#include "mensagemimg.h"

#include <fstream>
#include <iostream>


MensagemImagem::MensagemImagem(std::string arquivo) {
  this->_arquivo = arquivo;
}

void MensagemImagem::exibir() {
  std::ifstream arquivo(this->_arquivo);
  std::string line;
  while (std::getline(arquivo, line))
    std::cout << line << std::endl;
  arquivo.close();
}
