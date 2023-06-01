#include <string>

class Pessoa {
  friend class RegistroCivil;
  private:
    unsigned int _cpf;
  protected:
    std::string _nome;
  public:
    unsigned int get_cpf() {
      return _cpf;
    }
};

class RegistroCivil {
  public:
    void mudar_nome(Pessoa &p, std::string novo_nome) {
      p._nome = novo_nome;
    }
};