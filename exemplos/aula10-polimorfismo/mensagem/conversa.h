#ifndef PDS2_CONVERSA_H
#define PDS2_CONVERSA_H

#include <memory>
#include <list>
#include "mensagem.h"


class Conversa {
private:
  std::list<std::shared_ptr<MensagemIF>> _mensagens;
public:
  void receber_mensagem(std::shared_ptr<MensagemIF> mensagem);
};

#endif
