#ifndef PDS2_MENSAGEMVOZ_H
#define PDS2_MENSAGEMVOZ_H

#include "mensagem.h"

class MensagemVoz : public Mensagem {
public:
  void exibir() override;
};

#endif
