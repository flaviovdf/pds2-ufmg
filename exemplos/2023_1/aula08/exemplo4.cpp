#include <iostream>
#include <string>
#include <list>

class Cliente {
  private:
    std::string _nome;
    double _saldo;
  public:
    Cliente(std::string nome) {
      _nome = nome;
      _saldo = 0;
    }
    std::string get_nome() {
      return _nome;
    }
    double get_saldo() {
      return _saldo;
    }
    void adicionar_saldo(double x) {
      _saldo = _saldo + x;
    }
};

class ListaDoCaixa {
  private:
    std::list<Cliente*> _clientes;
  public:
    void chegou_cliente(Cliente *c) {
      _clientes.push_back(c);
    }
    Cliente *atender_cliente() {
      Cliente *c = *_clientes.begin();
      _clientes.pop_front();
      c->adicionar_saldo(10);
      return c;
    }
};

ListaDoCaixa cria_lista() {
  Cliente *c1 = new Cliente("Flavio");
  Cliente *c2 = new Cliente("Ana");
  Cliente *c3 = new Cliente("Bruno");
  Cliente *c4 = new Cliente("Carla");
  
  ListaDoCaixa l = ListaDoCaixa();
  l.chegou_cliente(c4);
  l.chegou_cliente(c2);
  l.chegou_cliente(c3);
  l.chegou_cliente(c1);

  (*c4).adicionar_saldo(20);

  return l;
}

int main() {
  ListaDoCaixa l = cria_lista();
  Cliente *c = l.atender_cliente();
  std::cout << c->get_saldo() << std::endl;

  delete c;
}






