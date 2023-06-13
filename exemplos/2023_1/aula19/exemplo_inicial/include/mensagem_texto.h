#ifndef PDS2_MENSAGEMTXT_H
#define PDS2_MENSAGEMTXT_H

#include "mensagem.h"

class MensagemTexto : public Mensagem {
public:
  void exibir() override;
};

#endif
