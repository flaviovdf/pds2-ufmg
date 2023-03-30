#include <map>
#include <iostream>
#include <ostream>
#include <string>

class RegistroNomes {
  private:
    std::map<unsigned long, std::string> _nomes;
  public:
    void adicionar_pessoa(
      unsigned long cpf,
      std::string nome
    ) {
      _nomes.insert({cpf, nome});
    }
    std::string pega_nome(
      unsigned long cpf
    ) {
      return _nomes.at(cpf);
    }
    void imprime_nomes() {
      auto it = _nomes.begin();
      while (it != _nomes.end()) {
        std::cout << "O CPF " << it->first;
        std::cout << " tem nome " << it->second;
        std::cout << std::endl;
        it = next(it);
      }
    }
};

int main() {
  RegistroNomes nomes = RegistroNomes();
  nomes.adicionar_pessoa(1, "Flavio");
  nomes.adicionar_pessoa(2, "Flavio");
  nomes.adicionar_pessoa(9, "Ana Lucia");

  nomes.adicionar_pessoa(2, "Flavio");

  nomes.imprime_nomes(); 
  return 0;
}


