#include <iostream>

#include "listasimples.h"


ListaSimplesmenteEncadeada::ListaSimplesmenteEncadeada() {
  _inicio = nullptr;
  _fim = nullptr;
  _num_elementos_inseridos = 0;
}

ListaSimplesmenteEncadeada::~ListaSimplesmenteEncadeada() {
  node_t *anterior = nullptr;
  node_t *proximo = _inicio;
  while (proximo != nullptr) {
    proximo = proximo->proximo;
    anterior = proximo;
    delete anterior;
  }
}

void ListaSimplesmenteEncadeada::inserir_elemento(int elemento) {
  node_t *novo = new node_t();
  novo->elemento = elemento;
  novo->proximo = nullptr;
  if (_inicio == nullptr) {
    _inicio = novo;
    _fim = novo;
  } else {
    _fim->proximo = novo;
    _fim = novo;
  }
  _num_elementos_inseridos++;
}

void ListaSimplesmenteEncadeada::remove_iesimo(int i) {
  if (i >= _num_elementos_inseridos) {
    return;
  }
  node_t *atual = _inicio;
  node_t *anterior = nullptr;
  for (int j = 0; j < i; j++) {
    anterior = atual;
    atual = atual->proximo;
  }
  if (anterior != nullptr)
    anterior->proximo = atual->proximo;
  if (i == 0)
    _inicio = atual->proximo;
  if (i == _num_elementos_inseridos - 1) {
    _fim = anterior;
    _fim->proximo = nullptr;
  }
  _num_elementos_inseridos--;
  delete atual;
}

void ListaSimplesmenteEncadeada::imprimir() {
  node_t *atual = _inicio;
  while (atual != nullptr) {
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}
