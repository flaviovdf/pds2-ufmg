#ifndef PDS2_MSG_IMG_H
#define PDS2_MSG_IMG_H

#include <string>
#include "msg.h"

class MensagemImg : public MensagemIF {
  private:
    std::string _caminho_do_arquivo;
  public:
    MensagemImg(
      std::string caminho_do_arquivo
    );
    virtual void exibir() override;
};

#endif