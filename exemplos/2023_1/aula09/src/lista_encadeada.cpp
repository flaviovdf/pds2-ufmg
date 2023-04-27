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
  // novo_no->dados = elemento;
  // novo_no->prox = nullptr;
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

void ListaEncadeada::imprimir() {
  for (no_t *tmp = _inicio; tmp != nullptr; tmp=tmp->prox) {
    std::cout << tmp->dados << std::endl;
  }
}