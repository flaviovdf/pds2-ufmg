#include "lista_vetor.h"

ListaVetor::ListaVetor() {
  _tam = 0;
  _max = 10;
  _dados = new int[_max];
}

ListaVetor::~ListaVetor() {
  delete[] _dados;
}

void ListaVetor::insere(int elemento) {
  if (_tam == _max) {
    _max = _max * 2;

    // aloco novo espaço
    int *novos_dados = new int[_max];
    // passo pelo antigo
    for (unsigned int i = 0; i < _tam; i++) {
      novos_dados[i] = _dados[i];
    }
    delete[] _dados;
    _dados = novos_dados;
  }
  _dados[_tam] = elemento;
  _tam++;
}

unsigned int ListaVetor::tamanho() {
  return _tam;
}

int ListaVetor::na(unsigned int pos) {
  return _dados[pos];
}

void ListaVetor::remove_ultimo() {
  if (_tam > 0)
    _tam--;
}







