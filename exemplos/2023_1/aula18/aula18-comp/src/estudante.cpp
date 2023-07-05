#include "estudante.h"
#include "papel.h"

Estudante::Estudante(
  unsigned int matricula
): _matricula(matricula) {}

unsigned int Estudante::get_matricula() const {
  return _matricula;
}

papel_t Estudante::get_papel_tipo() const {
  return papel_t::ESTUDANTE;
}