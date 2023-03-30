#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Discente {
  private:
    string _nome;
    unsigned short _idade;
    unsigned int _matricula;
    vector<string> _materias;
    double _cre;
  public:
    Discente(string nome, unsigned short idade, unsigned int matricula) {
      _nome = nome;
      _idade = idade;
      _matricula = matricula;
    }


    void adicionar_matricula(string disciplina) {
      for (int i = 0; i < _materias.size(); i++) {
        if (_materias[i] == disciplina) {
          cout << "Operação Inválida. Já matriculado" << endl;
          return;
        }
      }
      _materias.push_back(disciplina);
    }

    void imprimir_materias() {
      for (int i = 0; i < _materias.size(); i++) {
        cout << _materias[i] << endl;
      }
    }

    string get_nome() {
      return _nome;
    }

};

int main() {
  Discente d = Discente("Flavio", 37, 123);
  Discente d2 = Discente("Ana", 27, 221);


  cout << "As matérias de " << d.get_nome() << " são:" << endl;
  d.imprimir_materias();
  cout << endl;

  cout << "As matérias de " << d2.get_nome() << " são:" << endl;
  d2.imprimir_materias();
  cout << endl;

  cout << "As matérias de " << d2.get_nome() << " são:" << endl;
  d2.imprimir_materias();
  cout << endl;

}


