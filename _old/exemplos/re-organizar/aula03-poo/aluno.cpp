#include <string>

class Aluno {
private:
  std::string _nome;
  double _rendimento;
public:
  Aluno(std::string nome) {
    _nome = nome;
    _rendimento = 0;
  }
  bool set_rendimento(double valor) {
    if (valor < 0 || valor > 5) {
      return false;
    }
    _rendimento = valor;
    return true;
  }
};

int main() {
  Aluno aluno("Joao da Silva");
  aluno.set_rendimento(5671);
}
