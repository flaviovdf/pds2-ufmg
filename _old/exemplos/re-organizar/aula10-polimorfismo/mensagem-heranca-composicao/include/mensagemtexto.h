#ifndef PDS2_MENSAGEMTEXTO_H
#define PDS2_MENSAGEMTEXTO_H

#include <string>
#include "mensagem.h"


class MensagemTexto : public MensagemBase {
private:
  std::string _msg;
public:
  MensagemTexto(std::string avatar, std::string msg);
  virtual std::string get_avatar() const override;
  virtual void exibir() const override;
};

#endif
