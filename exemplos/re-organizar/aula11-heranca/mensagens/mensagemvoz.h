#ifndef PDS2_MENSAGEMVOZ_H
#define PDS2_MENSAGEMVOZ_H

#include <string>
#include "mensagem.h"


class MensagemVoz : public MensagemBase {
private:
  std::string _arquivo;
public:
  MensagemVoz(std::string avatar, std::string arquivo);
  virtual void exibir() const override;
};

#endif
