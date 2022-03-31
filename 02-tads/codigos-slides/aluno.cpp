#include <iostream>
#include <string>

class Aluno {
  private:
    std::string _nome;
    int _matricula;
    double *_notas;
    int _nota_atual;

  public:
    Aluno(std::string nome, int matricula, int n_materias) {
      _nome = nome;
      _matricula = matricula;
      _notas = new double[n_materias];
      _nota_atual = 0;
    }

    void adicionar_nota(double nota) {
      _notas[_nota_atual] = nota;
      _nota_atual++;
    }

    float rsg() {
      // Fazer a conta necessária
      return 0;
    }

    void imprime_nome() {
      std::cout << _nome << std::endl;
    }
};

int main() {
  Aluno aluno("Jose da Silva", 201812345, 10);
  return 0;
}
