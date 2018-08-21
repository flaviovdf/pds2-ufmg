#include "paciente.h"

Paciente::Paciente(std::string nome, double resistencia) {
  _nome = nome;
  _resistencia = resistencia;
  _infectado = false;
}

bool Paciente::esta_infectado() {
  return _infectado;
}

std::string Paciente::get_nome() {
  return _nome;
}

void Paciente::contato(Paciente &paciente) {
  if (
  if (virus.get_forca() > _resistencia) {
    _infectado = true;
  }
}

void Paciente::curar() {
  _infectado = false;
}
