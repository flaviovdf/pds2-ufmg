#include <iostream>

#include "../include/lista_vetor.h"

ListaVetor::ListaVetor() {
  _tam = 0;
  _buf_tam = 100;
  _dados = new int[_buf_tam];
}

void ListaVetor::insere_fim(int elemento) {
  if (_tam == _buf_tam) {
    int *auxiliar = new int[_buf_tam * 2];
    for (int i = 0; i < _tam; i++) {
      auxiliar[i] = _dados[i];          
    }
    _dados = auxiliar;
    _buf_tam = _buf_tam * 2;
  }
  _dados[_tam] = elemento;
  _tam++;
}

unsigned int ListaVetor::tamanho() {
  return _tam;
}

int ListaVetor::em(unsigned int pos) {
  return _dados[pos];
}

void ListaVetor::imprimir() {
  for (int i = 0; i < _tam; i++)
    std::cout << _dados[i] << " ";
  std::cout << std::endl;
}
