#include "mensagemvoz.h"

#include <iostream>


MensagemVoz::MensagemVoz(std::string avatar, std::string arquivo):
  MensagemBase(avatar), _arquivo(arquivo) {}

void MensagemVoz::exibir() const {
  std::cout << "Tocando o arquivo... ";
  std::cout << this->_arquivo;
  std::cout << std::endl;
}
