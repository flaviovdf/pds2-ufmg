#include "mensagemvoz.h"

#include <iostream>


MensagemVoz::MensagemVoz(std::string arquivo) {
  this->_arquivo = arquivo;
}

void MensagemVoz::exibir() {
  std::cout << "Tocando o arquivo... ";
  std::cout << this->_arquivo;
  std::cout << std::endl;
}
