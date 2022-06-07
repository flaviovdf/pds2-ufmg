#ifndef PDS2_PESSOA_H
#define PDS2_PESSOA_H

#include <string>

enum Acesso {
  SEM_ACESSO, BAIXO, ALTO
};

class Pessoa {
private:
  const std::string _nome;
  const unsigned long _cpf;
public:
  Pessoa(
    std::string nome,
    unsigned long cpf
  );
  std::string get_nome() const;
  unsigned long get_cpf() const;
  virtual Acesso acesso_moodle() const;
};

#endif
