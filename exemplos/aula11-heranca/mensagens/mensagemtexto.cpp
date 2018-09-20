#include "mensagemtexto.h"

#include <iostream>


MensagemTexto::MensagemTexto(std::string avatar, std::string msg):
  MensagemBase(avatar), _msg(msg) {}

void MensagemTexto::exibir() const {
  std::cout << this->_msg;
  std::cout << std::endl;
}

std::string MensagemTexto::get_avatar() const {
  return "";
}
