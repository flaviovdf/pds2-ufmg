#ifndef PDS2_MSG_AUDIO_H
#define PDS2_MSG_AUDIO_H

#include <string>

#include "mensagem.h"

class MensagemAudio : public MensagemIF {
  private:
    std::string _caminho_arquivo_wav;
  public:
    MensagemAudio(
      std::string caminho_arquivo_wav
    );
    virtual void exibir_na_tela() override;
};

#endif
