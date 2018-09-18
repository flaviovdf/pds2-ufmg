#ifndef PDS2_MENSAGEMIMG_H
#define PDS2_MENSAGEMIMG_H

#include <string>
#include "mensagem.h"


class MensagemImagem : public MensagemIF {
private:
  std::string _arquivo;
public:
  MensagemImagem(std::string arquivo);
  virtual void exibir();
};

#endif
