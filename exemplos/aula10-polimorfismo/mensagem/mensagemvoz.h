#ifndef PDS2_MENSAGEMTEXTO_H
#define PDS2_MENSAGEMTETXO_H

#include <string>
#include "mensagem.h"


class MensagemVoz : public MensagemIF {
private:
  std::string _arquivo;
public:
  MensagemVoz(std::string arquivo);
  virtual void exibir();
};

#endif
