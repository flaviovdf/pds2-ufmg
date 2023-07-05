#include "cadastro_pessoas.h"
#include "estudante.h"
#include "papel.h"
#include "pessoa.h"
#include "professor.h"

int main() {
  CadastroPessoas cadastro = CadastroPessoas();
  
  Pessoa p1 = Pessoa("Flavio", 1);
  cadastro.registrar_pessoa(p1);

  Pessoa ana = Pessoa("Ana", 2);
  
  Professor professor_ana = Professor(3, 20.0);
  professor_ana.adicionar_disciplina("ALC");
  
  Estudante estudante_ana = Estudante(20231029);
  
  ana.adicionar_papel(professor_ana);
  ana.adicionar_papel(estudante_ana);

  cadastro.registrar_pessoa(ana);

  Estudante *e_ana = \
    dynamic_cast<Estudante*>(
      ana.get_papel(papel_t::ESTUDANTE)
    );

}