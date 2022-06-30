#ifndef PDS2_MSG_TEXTO_H
#define PDS2_MSG_TEXTO_H

#include <string>

#include "mensagem.h"

class MensagemTexto : public MensagemIF {
  private:
    std::string _msg;
  public:
    MensagemTexto(
      std::string msg
    );
    virtual void exibir_na_tela() override;
};

#endif
