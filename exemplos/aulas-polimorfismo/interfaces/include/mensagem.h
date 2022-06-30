#ifndef PDS2_MSG_H
#define PDS2_MSG_H

class MensagemIF {
  public:
    /**
     * Exibe uma mensagem na tela do terminal
     **/
    virtual void exibir_na_tela() = 0;
};


#endif