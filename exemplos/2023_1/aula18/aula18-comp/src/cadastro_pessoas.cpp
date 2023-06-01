#include "cadastro_pessoas.h"

void CadastroPessoas::registrar_pessoa(Pessoa &p) {
  if (_registro.count(p.get_cpf()) != 0) {
    throw cpf_ja_existe_e();
  }

  _registro[p.get_cpf()] = &p;
}





