#include <iostream>

#include "listasimples.h"

template class ListaSimplesmenteEncadeada<int>;
template class ListaSimplesmenteEncadeada<double>;
template class ListaSimplesmenteEncadeada<std::string>;

template struct node_t<int>;
template struct node_t<double>;
template struct node_t<std::string>;


template <typename T>
ListaSimplesmenteEncadeada<T>::ListaSimplesmenteEncadeada() {
  this->_inicio = nullptr;
  this->_fim = nullptr;
  this->_num_elementos_inseridos = 0;
}

template <typename T>
ListaSimplesmenteEncadeada<T>::~ListaSimplesmenteEncadeada() {
  node_t<T> *anterior = nullptr;
  node_t<T> *proximo = this->_inicio;
  while (proximo != nullptr) {
    anterior = proximo;
    proximo = proximo->proximo;
    delete anterior;
  }
}

template <typename T>
void ListaSimplesmenteEncadeada<T>::inserir_elemento(T elemento) {
  node_t<T> *novo = new node_t<T>();
  novo->elemento = elemento;
  novo->proximo = nullptr;
  if (this->_inicio == nullptr) {
    this->_inicio = novo;
    this->_fim = novo;
  } else {
    this->_fim->proximo = novo;
    this->_fim = novo;
  }
  this->_num_elementos_inseridos++;
}

template <typename T>
void ListaSimplesmenteEncadeada<T>::imprimir() {
  node_t<T> *atual = this->_inicio;
  while (atual != nullptr) {
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}
