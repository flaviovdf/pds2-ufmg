#ifndef PDS2_PESSOA_H
#define PDS2_PESSOA_H

#include <string>

class Pessoa {
private:
  const std::string _nome;
  const unsigned int _cpf;
public:
  Pessoa(
    std::string nome,
    unsigned int cpf
  );
  std::string get_nome() const;
  unsigned int get_cpf() const;
  virtual unsigned int get_acesso();
};

#endif
