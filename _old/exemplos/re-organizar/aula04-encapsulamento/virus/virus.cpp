#include "virus.h"

Virus::Virus(std::string nome, double forca) {
  _nome = nome;
  _forca = forca;
}

std::string Virus::get_nome() {
  return _nome;
}

double Virus::get_forca() {
  return _forca;
}
