#include <iostream>
#include <string>
#include <vector>

// Vamos colocar junto do main por simplicidade
struct Pessoa {
  const std::string _nome;
  int _idade;

  // Construtor com lista de inicialização
  Pessoa(std::string nome, int idade):
    _nome(nome), _idade(idade) {}

  std::string get_nome() {
    return _nome;
  }
  int get_idade() {
    return _idade;
  }
  void set_idade(int nova_idade) {
    _idade = nova_idade;
  }
};


void ano_novo(std::vector<Pessoa> &pessoas) {
  for (int i = 0; i < pessoas.size(); i++)
    pessoas.at(i).set_idade(pessoas.at(i).get_idade() + 1);
}


std::vector<std::string> pegar_nomes(std::vector<Pessoa> const &pessoas) {
  std::vector<std::string> nomes;
  for (Pessoa pessoa : pessoas)
    nomes.push_back(pessoa.get_nome());
  return nomes;
}

int main() {
  std::vector<Pessoa> pessoas;
  pessoas.push_back(Pessoa("Ana", 18));
  pessoas.push_back(Pessoa("Pedro", 19));

  // Primeira forma de acesso
  std::cout << pessoas[0].get_idade() << std::endl;
  std::cout << pessoas[1].get_idade() << std::endl;

  ano_novo(pessoas);

  // Segunda forma, com at
  std::cout << pessoas.at(0).get_idade() << std::endl;
  std::cout << pessoas.at(1).get_idade() << std::endl;

  return 0;
}
