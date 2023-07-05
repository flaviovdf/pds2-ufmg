#include <iostream>

#include "listadupla.h"

ListaDuplamenteEncadeada::ListaDuplamenteEncadeada() {
  _inicio = nullptr;
  _fim = nullptr;
  _num_elementos_inseridos = 0;
}

ListaDuplamenteEncadeada::~ListaDuplamenteEncadeada() {
  node_t *anterior = nullptr;
  node_t *proximo = _inicio;
  while (proximo != nullptr) {
    anterior = proximo;
    proximo = proximo->proximo;
    delete anterior;
  }
}

void ListaDuplamenteEncadeada::inserir_elemento(int elemento) {
  node_t *novo = new node_t();
  novo->elemento = elemento;
  novo->proximo = nullptr;
  novo->anterior = nullptr;
  if (_inicio == nullptr) {
    _inicio = novo;
    _fim = novo;
  } else {
    _fim->proximo = novo;
    novo->anterior = _fim;
    _fim = novo;
  }
  _num_elementos_inseridos++;
}

void ListaDuplamenteEncadeada::remove_iesimo(int i) {
  if (i >= _num_elementos_inseridos) {
    return;
  }
  node_t *atual = _inicio;
  for (int j = 0; j < i; j++)
    atual = atual->proximo;
  if (atual->proximo != nullptr)
    atual->proximo->anterior = atual->anterior;
  if (atual->anterior != nullptr)
    atual->anterior->proximo = atual->proximo;
  if (i == 0)
    _inicio = atual->proximo;
  if (i == _num_elementos_inseridos - 1)
    _fim = atual->anterior;
  _num_elementos_inseridos--;
  delete atual;
}

void ListaDuplamenteEncadeada::imprimir() {
  node_t *atual = _inicio;
  while (atual != nullptr) {
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}