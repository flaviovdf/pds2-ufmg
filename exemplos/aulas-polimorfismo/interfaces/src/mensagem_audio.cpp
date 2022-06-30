#include <iostream>
#include <ostream>

#include "mensagem_audio.h"

MensagemAudio::MensagemAudio(
  std::string caminho_arquivo_wav
): _caminho_arquivo_wav(caminho_arquivo_wav) {}

void MensagemAudio::exibir_na_tela() {
  std::cout << "Tocando em 1x...." << std::endl;
  std::cout << _caminho_arquivo_wav << std::endl;
  std::cout << "(Play), (Pause)" << std::endl;
}