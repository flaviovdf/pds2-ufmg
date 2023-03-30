#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Conta {
  private:
    double _saldo;
    unsigned int _numero;
    string _tipo;
  public:
    Conta(unsigned int numero, string tipo) {
      _numero = numero;
      _tipo = tipo;
      _saldo = 0.0;
    }
    double get_saldo() {
      return _saldo;
    }
    bool sacar(double valor) {
      if (valor > _saldo) {
        return false;
      }
      if (valor < 0) {
        return false;
      }
      _saldo -= valor;
      return true;
    }
    bool depositar(double valor) {
      if (valor < 0) {
        return false;
      }
      _saldo += valor;
      return true;
    }
};

class Cliente {
  private:
    string _nome;
    unsigned long _cpf;
    vector<Conta> _contas;
};


int main() {
  Conta conta_flavio = Conta(1, "C");
  Conta conta_ana = Conta(2, "P");
  
  conta_ana.depositar(-20);
  
  cout << "Saldo de Flavio: ";
  cout << conta_flavio.get_saldo();
  cout << endl;

  cout << "Saldo de Ana: ";
  cout << conta_ana.get_saldo();
  cout << endl;

  return 0;
}









