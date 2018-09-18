#include "mensagem.h"
#include "mensagemtexto.h"
#include "mensagemvoz.h"

void exibir_na_tela(MensagemIF *msg) {
  msg->exibir();
}

int main(void) {
  MensagemIF *texto = new MensagemTexto("Oi, tem aula de PDS2 hoje?");
  MensagemIF *audio = new MensagemVoz("audio.wav");
  exibir_na_tela(texto);
  exibir_na_tela(audio);
  delete texto;
  delete audio;
}
