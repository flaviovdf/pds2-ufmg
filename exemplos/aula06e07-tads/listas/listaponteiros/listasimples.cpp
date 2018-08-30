#include <iostream>

#include "listasimples.h"


ListaSimplesmenteEncadeada::ListaSimplesmenteEncadeada() {
  this->_inicio = nullptr;
  this->_fim = nullptr;
  this->_num_elementos_inseridos = 0;
}

ListaSimplesmenteEncadeada::~ListaSimplesmenteEncadeada() {
  node_t *anterior = nullptr;
  node_t *proximo = this->_inicio;
  while (proximo != nullptr) {
    anterior = proximo;
    proximo = proximo->proximo;
    delete anterior;
  }
}

void ListaSimplesmenteEncadeada::inserir_elemento(int elemento) {
  node_t *novo = new node_t();
  novo->elemento = elemento;
  if (this->_inicio == nullptr) {
    this->_inicio = novo;
    this->_fim = novo;
  } else {
    this->_fim->proximo = novo;
    this->_fim = novo;
  }
}

void ListaSimplesmenteEncadeada::imprimir() {
  node_t *atual = this->_inicio;
  while (atual != nullptr) {
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}
