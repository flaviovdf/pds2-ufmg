#include "conversa.h"

void Conversa::receber_mensagem(std::shared_ptr<MensagemIF> mensagem) {
  mensagem->exibir();
  this->_mensagens.push_back(mensagem);
}
