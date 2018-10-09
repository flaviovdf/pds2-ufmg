#include "aluno.h"

#include <set>

struct aluno_comparator_mat_f {
  bool operator()(const Aluno &aluno1, const Aluno &aluno2) const {
    return aluno1.get_matricula() < aluno2.get_matricula()
  }
};

struct aluno_comparator_nome_f {
  bool operator()(const Aluno &aluno1, const Aluno &aluno2) const {
    return aluno1.get_nome() < aluno2.get_nome();
  }
};

int main() {
  std::set<Aluno, aluno_comparator_mat_f> alunos;
  return 0;
}
