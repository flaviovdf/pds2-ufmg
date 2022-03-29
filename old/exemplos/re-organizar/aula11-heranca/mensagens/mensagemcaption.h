#ifndef PDS2_MENSAGEMCAPTION_H
#define PDS2_MENSAGEMCAPTION_H

#include "mensagemimg.h"
#include "mensagemtexto.h"


class MensagemCaption : public MensagemBase {
private:
  MensagemImagem _img;
  MensagemTexto _texto;
public:
  MensagemCaption(std::string avatar, MensagemImagem img, MensagemTexto texto);
  virtual void exibir() const override;
};

#endif
