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

void Node::_inserir_no(Node *node) {
  if (node->_elemento < this->_elemento) {
    if (this->_esquerda == nullptr) {
      this->_esquerda = node;
    } else {
      this->_esquerda->_inserir_no(node);
    }
  } else if (node->_elemento > this->_elemento) {
    if (this->_direita == nullptr) {
      this->_direita = node;
    } else {
      this->_direita->_inserir_no(node);
    }
  }
}

void Node::inserir_elemento(int elemento) {
  if (!this->tem_elemento(elemento))
    this->_inserir_no(new Node(elemento));
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
