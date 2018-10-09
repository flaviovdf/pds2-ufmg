#ifndef PDS2_ALUNO_H
#define PDS2_ALUNO_H

#include <string>

class Aluno {
private:
  const std::string _nome;
  const int _matricula;
public:
  Aluno(std::string nome, int matricula);
  std::string get_nome() const;
  int get_matricula() const;
};

#endif
