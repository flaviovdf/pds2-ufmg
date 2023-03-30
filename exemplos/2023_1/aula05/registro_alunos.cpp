#include <fstream>
#include <iostream>
#include <iterator>
#include <map>
#include <set>
#include <string>
#include <vector>


using namespace std;

class Aluno {
  private:
    std::string _nome;
    int _matricula;
    set<int> _materias;
  public:
    Aluno(std::string nome, int matricula) {
      _nome = nome;
      _matricula = matricula;
    }

    std::string get_nome() {
      return _nome;
    }

    int get_matricula() {
      return _matricula;
    }

    void matricular(int materia) {
      _materias.insert(materia);
    }

    set<int> get_materias() {
      return _materias;
    }
};

class RegistroDeAlunos {
  private:
    map<int, Aluno> _registro_alunos;
  public:
    void inserir_aluno(Aluno a) {
      _registro_alunos.insert(
        pair<int, Aluno>(a.get_matricula(), a)
      );
    }

    void adicionar_materia(int matricula, int materia) {
      _registro_alunos.at(matricula).matricular(materia);
    }

    bool ja_registrada(int matricula) {
      return _registro_alunos.count(matricula) > 0;
    }

    void imprime_registro() {
      auto it = _registro_alunos.begin();
      while (it != _registro_alunos.end()) {
        int matricula = it->first;
        Aluno a = it->second;
        int n = a.get_materias().size();

        cout << "O aluno com nome: " << a.get_nome();
        cout << " e matricula " << matricula;
        cout << " se matriculou em " << n << " materias";
        cout << endl;

        it = next(it);
      }
    }
};


int main() {
  fstream arquivo_entrada_stream;
  arquivo_entrada_stream.open("alunos.dat");
  
  RegistroDeAlunos registro;
  while (!arquivo_entrada_stream.eof()) {
    string nome;
    arquivo_entrada_stream >> nome;

    int matricula;
    arquivo_entrada_stream >> matricula;

    int cod_disciplina;
    arquivo_entrada_stream >> cod_disciplina;

    if (!registro.ja_registrada(matricula)) {
      Aluno a = Aluno(nome, matricula);
      registro.inserir_aluno(a);
    }
    registro.adicionar_materia(matricula, cod_disciplina);
  };
  
  registro.imprime_registro();

  arquivo_entrada_stream.close();
  return 0;
}









