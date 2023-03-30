#include <iostream>
#include <iterator>
#include <ostream>

#include "aluno.h"
#include "data.h"
#include "pessoa.h"
#include "pessoa_ufmg.h"
#include "professor.h"
#include "registro_pessoas.h"

int main() {
  Pessoa flavio_base = Pessoa(
    "Flavio", 20160202, 587521522, date_t{1985, 9, 30}
  );

  Aluno flavio_aluno = Aluno(
    "Flavio", 20230202, 587521522,
    date_t{1985, 9, 30}, 
    semestre_t{2022, 2}
  );

  PessoaFisicaUFMG flavio_registro = PessoaFisicaUFMG(587521522);
  flavio_registro.nova_persona(Tipo::PESSOA, &flavio_base);
  flavio_registro.nova_persona(Tipo::ALUNO, &flavio_aluno);

  // Aluno aluno = Aluno(
  //   "Ana", 20220201, 287221524, date_t{1985, 9, 30}, semestre_t{2022, 2}
  // );
  
  // Professor professor = Professor(
  //   "Paula",
  //   20160898,
  //   12462362,
  //   date_t{03, 11, 1980},
  //   date_t{03, 01, 2016},
  //   2
  // );

  // // std::cout << (char) pessoa.get_tipo() << std::endl;
  // // std::cout << (char) aluno.get_tipo() << std::endl;
  // std::cout << (char) professor.get_tipo() << std::endl;

  // // RegistroPessoas registro_ufmg = RegistroPessoas();
  
  // // registro_ufmg.cadastrar_pessoa(pessoa);
  // // registro_ufmg.cadastrar_pessoa(aluno);
  // // registro_ufmg.cadastrar_pessoa(professor);

  // // Pessoa *cadastrada1 = registro_ufmg.busca_cpf(287221524);
  // // Pessoa *cadastrada2 = registro_ufmg.busca_cpf(587521522);

  // // if (cadastrada1->get_tipo() == Tipo::ALUNO) {
  // //   Aluno *cadastrada_como_aluno = (Aluno *) cadastrada1;
  // // }
  // // Aluno *cadastrada_como_aluno2 = (Aluno *) cadastrada2;

  // // semestre_t sem = cadastrada_como_aluno2->get_semestre_matricula();
  // // std::cout << sem.ano << "." << sem.sem << std::endl; 
  return 0;
}