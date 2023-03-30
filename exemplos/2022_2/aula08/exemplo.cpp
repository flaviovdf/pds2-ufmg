#include <iostream>

class Pessoa {
  private:
    unsigned int _idade = 0;
  public:
    void aumenta_idade() {
      _idade++;
    }
    unsigned int get_idade() {
      return _idade;
    }
};

void aniversario(Pessoa &p) {
  p.aumenta_idade();
}

int main() {
  Pessoa p = Pessoa();
  aniversario(p);
  std::cout << p.get_idade() << std::endl;
}
