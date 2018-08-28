#include <iostream>
#include "matriz.h"

Matriz::Matriz(int n_linhas, int n_colunas) {
  std::cout << "Construindo uma matriz" << std::endl;
  this->_dados = new int*[n_linhas];
  for (int i = 0; i < n_linhas; i++) {
    this->_dados[i] = new int[n_colunas];
    for (int j = 0; j < n_colunas; j++) {
      this->_dados[i][j] = 0;
    }
  }
}

Matriz::~Matriz() {
  std::cout << "Destruindo uma matriz" << std::endl;
  for (int i = 0; i < this->_n_linhas; i++) {
    delete this->_dados[i];
  }
  delete this->_dados;
}
