#include "usuario.h"

Usuario::Usuario(std::string nome):
  _nome(nome) { }


void Usuario::inserir_item(Item item) {
  this->_midias.push_back(item);
}

double preco_lancamento(bool compra) {
  if (compra) return 32;
  else return 16;
}

double preco_serie(bool compra) {
  if (compra) return 12;
  else return 3.5;
}

double preco_normal(bool compra) {
  if (compra) return 15;
  else return 7;
}

double Usuario::total_gastos() {
  std::vector<Item>::iterator it = this->_midias.begin();
  std::vector<Item>::iterator ed = this->_midias.end();

  double total_gastos = 0.0;
  
  for (; it != ed; it++) {
    Item item = *it;
    Midia midia = item.get_midia();
    bool compra = item.foi_compra();
    switch(midia.get_tipo()) {
      case Tipo::EPISODIO_SERIE:
          total_gastos += preco_serie(compra);
        break;
      case Tipo::LANCAMENTO:
          total_gastos += preco_lancamento(compra);
        break;
      case Tipo::NORMAL:
          total_gastos += preco_normal(compra);
        break;
    }
  }
  return total_gastos;
}
