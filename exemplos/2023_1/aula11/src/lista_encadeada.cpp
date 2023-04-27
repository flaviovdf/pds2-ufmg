#include <cstdlib>
#include <iostream>

#include "../include/lista_encadeada.h"

ListaEncadeada::ListaEncadeada() {
  _tamanho = 0;
  _inicio = nullptr;
  _fim = nullptr;
}

unsigned int ListaEncadeada::tamanho() {
  return _tamanho;
}

void ListaEncadeada::insere_fim(int elemento) { 
  no_t *novo_no = new no_t{elemento, nullptr};
  if (_tamanho == 0) {
    _inicio = novo_no;
    _fim = novo_no;
  } else {
    _fim->prox = novo_no;
  }
  _fim = novo_no;
  _tamanho++;
}

void ListaEncadeada::remove(unsigned int pos) {
  if (pos >= _tamanho) {
    std::cerr << "Posição Inválida!" << std::endl;
    exit(1);
  }

  no_t *anterior = nullptr;
  no_t *aux = _inicio;
  while (pos > 0) {
    anterior = aux;
    aux = aux->prox;
    pos--;
  }
  if (anterior != nullptr) {
    anterior->prox = aux->prox;
  } else {
    _inicio = aux->prox;
  }
  _tamanho--;
  delete aux;
}

int ListaEncadeada::em(unsigned int pos) {
  if (pos >= _tamanho) {
    std::cerr << "Posição Inválida!" << std::endl;
    exit(1);
  }
  no_t *aux = _inicio;
  while (pos > 0) {
    aux = aux->prox;
    pos--;
  }
  return aux->dados;
}

void ListaEncadeada::imprimir() {
  for (no_t *tmp = _inicio; tmp != nullptr; tmp=tmp->prox) {
    std::cout << tmp->dados << " ";
  }
  std::cout << std::endl;
  std::cout << std::endl;
}