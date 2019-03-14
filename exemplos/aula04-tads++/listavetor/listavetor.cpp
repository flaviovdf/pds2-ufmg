#include <iostream>

#include "listavetor.h"


ListaVetorInteiros::ListaVetorInteiros() {
  _elementos = new int[TAMANHO_INICIAL]();
  _num_elementos_inseridos = 0;
  _capacidade = TAMANHO_INICIAL;
}

ListaVetorInteiros::~ListaVetorInteiros() {
  delete[] _elementos;
}

void ListaVetorInteiros::inserir_elemento(int elemento) {
  if (_num_elementos_inseridos == _capacidade) {
    int *new_data = new int[_capacidade * 2];

    for (int i = 0; i < _num_elementos_inseridos; i++)
      new_data[i] = _elementos[i];

    delete[] _elementos;
    _elementos = new_data;
    _capacidade = _capacidade * 2;
  }
  _elementos[_num_elementos_inseridos] = elemento;
  _num_elementos_inseridos++;
}

void ListaVetorInteiros::imprimir() {
  for (int i = 0; i < _num_elementos_inseridos; i++)
    std::cout << _elementos[i] << " ";
  std::cout << std::endl;
}
