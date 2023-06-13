#include <iostream>

#include "mensagem_texto.h"

MensagemTexto::MensagemTexto(
  std::string msg
): _msg(msg) {}

void MensagemTexto::exibir_na_tela() {
  std::cout << _msg << std::endl;
}