#include <iostream>
#include <list>

#include "mensagem.h"
#include "mensagem_audio.h"
#include "mensagem_texto.h"

void exibe_todas(std::list<MensagemIF *> l) {
  for (MensagemIF *msg : l) {
    msg->exibir_na_tela();
  }
}

int main() {
  MensagemTexto txt = MensagemTexto("oi");
  MensagemAudio audio = MensagemAudio("aula_cancelada.wav");

  std::list<MensagemIF *> l;
  l.push_back(&txt);
  l.push_back(&audio);

  exibe_todas(l);

  return 0;
}