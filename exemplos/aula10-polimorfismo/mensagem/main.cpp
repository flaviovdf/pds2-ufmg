#include "mensagem.h"
#include "mensagemimg.h"
#include "mensagemtexto.h"
#include "mensagemvoz.h"

void f(MensagemVoz &voz) {

}

void exibir_na_tela(MensagemIF &msg) {
  msg.exibir();
  f(msg);
}

int main(void) {
  MensagemTexto texto("Oi, tem aula de PDS2 hoje?");
  MensagemVoz audio("audio.wav");
  MensagemImagem image("imagem03.ascii");
  MensagemTexto texto2("Mas que puxa :(");

  exibir_na_tela(texto);
  exibir_na_tela(audio);
  exibir_na_tela(image);
  exibir_na_tela(texto2);
}
