#include "mensagemimg.h"

#include <fstream>
#include <iostream>


MensagemImagem::MensagemImagem(std::string avatar, std::string arquivo):
  MensagemBase(avatar), _arquivo(arquivo) {}

void MensagemImagem::exibir() const {
  std::ifstream arquivo(this->_arquivo);
  std::string line;
  while (std::getline(arquivo, line))
    std::cout << line << std::endl;
  arquivo.close();
}
