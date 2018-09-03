#include "bst.h"


BST::BST() {
  this->_raiz = nullptr;
  this->_num_elementos_inseridos = 0;
}

BST::~BST() {
  if (this->_raiz != nullptr)
    delete this->_raiz;
}

void BST::inserir_elemento(int elemento) {
  if (this->_raiz == nullptr) {
    this->_raiz = new Node(elemento);
    this->_num_elementos_inseridos++;
  } else if (!this->_raiz->tem_elemento(elemento)) {
    this->_raiz->inserir_elemento(elemento);
    this->_num_elementos_inseridos++;
  }
}

bool BST::tem_elemento(int elemento) {
  if (this->_raiz == nullptr) {
    return false;
  }
  return this->_raiz->tem_elemento(elemento);
}

void BST::imprimir() {
  if (this->_raiz != nullptr) {
    this->_raiz->imprimir();
  }
}
