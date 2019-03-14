#include <iostream>
#include "matriz.h"

Matriz::Matriz(int n_linhas, int n_colunas) {
  std::cout << "Construindo uma matriz" << std::endl;
  _dados = new int*[n_linhas]();
  for (int i = 0; i < n_linhas; i++) {
    _dados[i] = new int[n_colunas];
  }
  _n_linhas = n_linhas;
  _n_colunas = n_colunas;
}

Matriz::~Matriz() {
  std::cout << "Destruindo uma matriz" << std::endl;
  for (int i = 0; i < _n_linhas; i++) {
    delete[] _dados[i];
  }
  delete[] _dados;
}

void Matriz::seta(int i, int j, int v) {
  _dados[i][j] = v;
}

int Matriz::valor(int i, int j) {
  return _dados[i][j];
}

Matriz Matriz::soma(Matriz &outra) {
  Matriz retorno = Matriz(_n_linhas, _n_colunas);
  for (int i = 0; i < _n_linhas; i++) {
    for (int j = 0; j < _n_colunas; j++) {
      retorno._dados[i][j] = valor(i, j) + outra.valor(i, j);
    }
  }
  return retorno;
}
