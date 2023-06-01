#ifndef PDS2_CADASTRO_PESSOAS_H
#define PDS2_CADASTRO_PESSOAS_H

#include <map>

#include "pessoa.h"

class cpf_ja_existe_e {};

class CadastroPessoas {
  private:
    std::map<unsigned int, Pessoa *> _registro;
  public:
    CadastroPessoas();
    /*
     * @brief insere a pessoa no cadastro garantindo
     *       que os cpfs não se repetem.
     * @throws cpf_ja_existe_e caso o cpf da pessoa já exista
     */
    void registrar_pessoa(Pessoa &p);
};


#endif