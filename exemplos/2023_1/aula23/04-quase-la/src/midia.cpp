#include "midia.h"

Midia::Midia(
  std::string nome, 
  double preco_aluguel, 
  double preco_compra,
  Tipo tipo
): _nome(nome), _preco_aluguel(preco_aluguel),
  _preco_compra(preco_compra), _tipo(tipo)
{}

Tipo Midia::get_tipo() {
  return this->_tipo;
}

std::string Midia::get_nome() {
  return this->_nome;
}

double Midia::get_preco_aluguel() {
  return this->_preco_aluguel;
}

double Midia::get_preco_compra() {
  return this->_preco_compra;
}
