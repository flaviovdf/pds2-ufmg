#include <iostream>
#include <vector>

#include "mensagem.h"
#include "mensagem_texto.h"
#include "mensagem_voz.h"

void exibir_conversa(std::vector<Mensagem *> conversa) {
  std::cout << "Existem: " << conversa.size() << " mensagens: " << std::endl;
  for (Mensagem *m : conversa) {
    m->exibir();
  }
}


int main() {
  MensagemTexto txt;
  MensagemVoz voz;
  Mensagem msg;

  std::vector<Mensagem *> conversa = {&txt, &voz};

  exibir_conversa(conversa);
}