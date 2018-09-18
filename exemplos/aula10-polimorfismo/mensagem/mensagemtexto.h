#ifndef PDS2_MENSAGEMTEXTO_H
#define PDS2_MENSAGEMTETXO_H

#include <string>
#include "mensagem.h"


class MensagemTexto : public MensagemIF {
private:
  std::string _msg;
public:
  MensagemTexto(std::string msg);
  virtual void exibir();
};

#endif
