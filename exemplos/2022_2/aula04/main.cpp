#include <iostream>
#include <iterator>
#include <set>
#include <string>

using namespace std;

class Pessoa {
  private:
    string _nome;
    unsigned long _cpf;
    set<string> _cpf_amigos;
  public:
    Pessoa(string nome, unsigned long cpf) {
      _nome = nome;
      _cpf = cpf;
    }
    void add_amigo(Pessoa amigo) {
      _cpf_amigos.insert(amigo._cpf);
    }
    void remove_amigo(Pessoa amigo) {
      _cpf_amigos.erase(amigo._cpf);
    }
    void imprime_amigos() {
      for (unsigned long cpf : _cpf_amigos) {
        cout << cpf << endl;
      }
      cout << endl;
    }
};

int main() {  
  Pessoa a0 = Pessoa("Pedro", 0);
  Pessoa a1 = Pessoa("Ana", 1);
  Pessoa a2 = Pessoa("Flavio", 2);
  Pessoa a3 = Pessoa("João", 3);

  a0.add_amigo(a1);
  a0.imprime_amigos();

  a0.add_amigo(a2);
  a0.add_amigo(a3);
  a0.imprime_amigos();

  a0.add_amigo(Pessoa("Flavio", 20));
  a0.imprime_amigos();

  a0.remove_amigo(Pessoa("Cristina", 2));
  a0.imprime_amigos();

}



