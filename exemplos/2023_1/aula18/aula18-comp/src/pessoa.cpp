#include "pessoa.h"

Pessoa::Pessoa(
  std::string nome,
  unsigned int cpf
): _nome(nome), _cpf(cpf) {}


void Pessoa::adicionar_papel(Papel &papel) {
  if (_papeis.count(papel.get_papel_tipo()) != 0) {
    throw ja_tenho_papel_e();
  }

  _papeis[papel.get_papel_tipo()] = &papel;
}

Papel *Pessoa::get_papel(papel_t tipo) {
  if (_papeis.count(tipo) == 0) {
    throw nao_sou_desse_papel_e();
  }

  return _papeis[tipo];
}