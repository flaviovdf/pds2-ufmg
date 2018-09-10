#include <iostream>

#include "node.h"


Node::Node(int elemento) {
  this->_elemento = elemento;
  this->_esquerda = nullptr;
  this->_direita = nullptr;
}

Node::~Node() {
  if (this->_esquerda != nullptr)
    delete this->_esquerda;
  if (this->_direita != nullptr)
    delete this->_direita;
}

void Node::inserir_elemento(int elemento) {
  if (elemento < this->_elemento) {
    if (this->_esquerda == nullptr) {
      this->_esquerda = new Node(elemento);
    } else {
      this->_esquerda->inserir_elemento(elemento);
    }
  } else if (elemento > this->_elemento) {
    if (this->_direita == nullptr) {
      this->_direita = new Node(elemento);
    } else {
      this->_direita->inserir_elemento(elemento);
    }
  }
}

bool Node::tem_elemento(int elemento) {
  if (this->_elemento == elemento) {
    return true;
  } else if (elemento < this->_elemento) {
    if (this->_esquerda == nullptr) {
      return false;
    } else {
      return this->_esquerda->tem_elemento(elemento);
    }
  } else {
    if (this->_direita == nullptr) {
      return false;
    } else {
      return this->_direita->tem_elemento(elemento);
    }
  }
}

void Node::imprimir() {
  std::cout << this->_elemento << std::endl;
  if (this->_esquerda != nullptr)
    this->_esquerda->imprimir();
  if (this->_direita != nullptr)
    this->_direita->imprimir();
}
