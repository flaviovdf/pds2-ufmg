#ifndef LISTA_ALUNO_PDS2_H
#define LISTA_ALUNO_PDS2_H

#include <vector>
#include "aluno.h"


class ListaOrdenadaAlunos {
private:
  std::vector<const Aluno *> _alunos;
public:
  void inserir_aluno(Aluno const &aluno);
};

#endif
