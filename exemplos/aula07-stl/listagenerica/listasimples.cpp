#include <iostream>

#include "listasimples.h"

// Temos que definir quais templates aceitamos
template class ListaSimplesmenteEncadeada<int>;
template class ListaSimplesmenteEncadeada<double>;
template class ListaSimplesmenteEncadeada<std::string>;

// Mesmo vale para o node
template struct node_t<int>;
template struct node_t<double>;
template struct node_t<std::string>;


template <typename T>
ListaSimplesmenteEncadeada<T>::ListaSimplesmenteEncadeada() {
  _inicio = nullptr;
  _fim = nullptr;
  _num_elementos_inseridos = 0;
}

template <typename T>
ListaSimplesmenteEncadeada<T>::~ListaSimplesmenteEncadeada() {
  node_t<T> *anterior = nullptr;
  node_t<T> *proximo = _inicio;
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
  if (_inicio == nullptr) {
    _inicio = novo;
    _fim = novo;
  } else {
    _fim->proximo = novo;
    _fim = novo;
  }
  _num_elementos_inseridos++;
}

template <typename T>
void ListaSimplesmenteEncadeada<T>::imprimir() {
  node_t<T> *atual = _inicio;
  while (atual != nullptr) {
    std::cout << atual->elemento << " ";
    atual = atual->proximo;
  }
  std::cout << std::endl;
}
