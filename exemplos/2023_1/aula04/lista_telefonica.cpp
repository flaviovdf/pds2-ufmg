#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Contato {
  private:
    string _nome;
    unsigned int _telefone;
  public:
    Contato(string nome, unsigned int telefone) {
      _nome = nome;
      _telefone = telefone;
    }

    string get_nome() {
      return _nome;
    }

    unsigned int get_telefone() {
      return _telefone;
    }
};

class Agenda {
  private:
    vector<Contato> _contatos;
  public:
    void adicionar_contato(
      string nome, unsigned int telefone
    ) {
      _contatos.push_back(Contato(nome, telefone));
    }

    unsigned int busca(string nome) {
      for (Contato c : _contatos) {
        if (c.get_nome() == nome) {
          return c.get_telefone();
        }
      }
      return 0;
    }
};

int main() {
  Agenda agenda = Agenda();
  agenda.adicionar_contato("Flavio", 3198272172);
  agenda.adicionar_contato("Paula", 3198272173);
  agenda.adicionar_contato("Pedro", 3198272173);

  cout << agenda.busca("Dom Pedro II") << endl;
}


