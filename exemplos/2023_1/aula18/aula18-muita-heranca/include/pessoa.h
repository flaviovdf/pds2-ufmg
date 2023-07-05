#ifndef PDS2_PESSOA_H
#define PDS2_PESSOA_H

#include <string>

class Pessoa {
private:
  std::string _nome;
  const unsigned int _cpf;
public:
  Pessoa(
    std::string nome,
    unsigned int cpf
  );
  void set_nome(std::string novo_nome);
  std::string get_nome();
  unsigned int get_cpf();
};

#endif
