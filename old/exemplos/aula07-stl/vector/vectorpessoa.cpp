#include <iostream>
#include <string>
#include <vector>

// Vamos colocar junto do main por simplicidade
struct Pessoa {

  const std::string _nome;
  const int _idade;

  // Construtor com lista de inicialização
  Pessoa(std::string nome, int idade):
    _nome(nome), _idade(idade) {}

  std::string get_nome() {
    return _nome;
  }
  int get_idade() {
    return _idade;
  }
};

int main() {
  std::vector<Pessoa> pessoas;
  pessoas.push_back(Pessoa("Ana", 18));
  pessoas.push_back(Pessoa("Pedro", 19));

  // Primeira forma de acesso
  std::cout << pessoas[0].get_nome() << std::endl;
  std::cout << pessoas[1].get_nome() << std::endl;

  // Segunda forma, com at
  std::cout << pessoas.at(0).get_nome() << std::endl;
  std::cout << pessoas.at(1).get_nome() << std::endl;

  return 0;
}
