#include "mensagemcaption.h"


MensagemCaption::MensagemCaption(std::string avatar, MensagemImagem img,
                                 MensagemTexto texto):
  MensagemBase(avatar), _img(img), _texto(texto) {}

void MensagemCaption::exibir() const {
  this->_img.exibir();
  this->_texto.exibir();
}
