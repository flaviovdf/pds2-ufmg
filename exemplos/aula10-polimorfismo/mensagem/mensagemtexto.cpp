#include "mensagemtexto.h"

#include <iostream>


MensagemTexto::MensagemTexto(std::string msg) {
  this->_msg = msg;
}

void MensagemTexto::exibir() {
  std::cout << this->_msg;
  std::cout << std::endl;
}
