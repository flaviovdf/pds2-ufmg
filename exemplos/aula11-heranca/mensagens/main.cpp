#include <ctime>
#include <iostream>

#include "mensagem.h"
#include "mensagemimg.h"
#include "mensagemtexto.h"
#include "mensagemvoz.h"

void exibir_na_tela(MensagemBase &msg) {
  std::cout << "--" << std::endl;
  std::cout << "Avatar: " << msg.get_avatar();
  std::cout << std::endl;
  msg.exibir();
  std::cout << msg.get_data() << std::endl;
  std::cout << "--" << std::endl;
}

int main(void) {
  auto avatar1 = ":|";
  std::string avatar2 = ":)";
  MensagemTexto texto(avatar1, "Oi, tem aula de PDS2 hoje?");
  MensagemVoz audio(avatar2, "audio.wav");
  MensagemImagem image(avatar1, "imagem03.ascii");
  MensagemTexto texto2(avatar1, "Mas que puxa :(");

  exibir_na_tela(texto);
  exibir_na_tela(audio);
  exibir_na_tela(image);
  exibir_na_tela(texto2);
}
