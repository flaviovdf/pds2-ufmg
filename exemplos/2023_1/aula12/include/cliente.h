#ifndef PDS2_CLIENTE_H
#define PDS2_CLIENTE_H

#include <string>

class Cliente {
  private:
    std::string _nome;
    double _saldo;
  public:
    Cliente(std::string nome);
    void adicionar_saldo(double saldo);
    std::string get_nome();
    double get_saldo();
};

#endif