#ifndef PDS2_MSG_TEXTO_H
#define PDS2_MSG_TEXTO_H

#include <string>
#include "msg.h"

class MensagemTxt : public MensagemIF {
  private:
    std::string _txt;
  public:
    MensagemTxt(
      std::string txt
    );
    virtual void exibir() override;
};

#endif