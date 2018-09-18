#include <iostream>

#include "listadupla.h"


ListaDuplamenteEncadeada::ListaDuplamenteEncadeada() {
  this->_inicio = nullptr;
  this->_fim = nullptr;
  this->_num_elementos_inseridos = 0;
}

ListaDuplamenteEncadeada::~ListaDuplamenteEncadeada() {
  node_t *anterior = nullptr;
  node_t *proximo = this->_inicio;
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
  if (this->_inicio == nullptr) {
    this->_inicio = novo;
    this->_fim = novo;
  } else {
    this->_fim->proximo = novo;
    novo->anterior = this->_fim;
    this->_fim = novo;
  }
  this->_num_elementos_inseridos++;
}

void ListaDuplamenteEncadeada::remove_iesimo(int i) {
  if (i >= this->_num_elementos_inseridos) {
    return;
  }
  node_t *atual = this->_inicio;
  for (int j = 0; j < i; j++)
    atual = atual->proximo;
  if (atual->proximo != nullptr)
    atual->proximo->anterior = atual->anterior;
  if (atual->anterior != nullptr)
    atual->anterior->proximo = atual->proximo;
  if (i == 0)
    this->_inicio = atual->proximo;
  if (i == this->_num_elementos_inseridos - 1)
    this->_fim = atual->anterior;
  this->_num_elementos_inseridos--;
  delete atual;
}

void ListaDuplamenteEncadeada::imprimir() {
  node_t *atual = this->_inicio;
  while (atual != nullptr) {
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}

int ListaDuplamenteEncadeada::tamanho() {
  return this->_num_elementos_inseridos;
}
