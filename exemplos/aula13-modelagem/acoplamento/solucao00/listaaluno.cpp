#include "listaaluno.h"

void ListaOrdenadaAlunos::inserir_aluno(Aluno const &aluno) {
  auto it = this->_alunos.begin();
  auto end = this->_alunos.end();
  while (it != end && (*it)->get_matricula() < aluno.get_matricula()) {
    it++;
  }
  this->_alunos.insert(it, &aluno);
}
