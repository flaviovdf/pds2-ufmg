#ifndef PDS2_MENSAGEMIMG_H
#define PDS2_MENSAGEMIMG_H

#include <string>
#include "mensagem.h"


class MensagemImagem : public MensagemBase {
private:
  std::string _arquivo;
public:
  MensagemImagem(std::string avatar, std::string arquivo);
  virtual void exibir() const override;
};

#endif
