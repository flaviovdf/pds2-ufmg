#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <set>

#include "aluno.h"

// Functor comparator
struct aluno_comparator_f {
  bool operator()(const Aluno &aluno1, const Aluno &aluno2) const {
    return aluno1.get_matricula() < aluno2.get_matricula();
  }
};

int main() {
  std::string linha;
  std::string palavra;
  std::istringstream stream_string;

  std::set<Aluno, aluno_comparator_f> nomes;

  // 1. Lê o stream cin (padrão/teclado) linha a linha
  while (std::getline(std::cin, linha)) {
    if (linha == "sair") // 2. Se o usuário digitar sair, quebra o laço
      break;
    // 3. Separa a linha em palavra. Para isto, se usa o istringstream
    //    Similar ao sscanf de C, usamos um texto como um arquivo.
    stream_string = std::istringstream(linha);
    std::string nome;
    int matricula;
    int codigo_disciplina;
    stream_string >> nome;
    stream_string >> matricula;
    stream_string >> codigo_disciplina;

    Aluno aluno(nome, matricula);
    nomes.insert(aluno);
  }

  for (Aluno aluno : nomes) {
    std::cout << aluno.get_nome() << std::endl;
  }
}
