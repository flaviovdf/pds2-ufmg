#include <exception>
#include <iostream>

#include "tabuleiro.h"


Tabuleiro::Tabuleiro() {
  int tamanho = 8;
  int inicio = 3;

  for (int i = 0; i < tamanho; i++) {
    _casas.push_back(vector<Peca *>());
    for (int j = 0; j < tamanho; j++) {
      _casas[i].push_back(nullptr);
    }
  }

  for (int i = 0; i < inicio; i++) {
    for (int j = 0; j < tamanho - 1; j+=2) {
      if (i % 2 == 0)
        _casas[i][j] = new Peca(Cor::VERMELHA);
      else
        _casas[i][j+1] = new Peca(Cor::VERMELHA);
    }
  }

  for (int i = tamanho - 1; i >= tamanho - inicio; i--) {
    for (int j = 0; j < tamanho - 1; j+=2) {
      if (i % 2 == 0)
        _casas[i][j] = new Peca(Cor::PRETA);
      else
        _casas[i][j+1] = new Peca(Cor::PRETA);
    }
  }

  _da_vez = Cor::VERMELHA;
}

Tabuleiro::~Tabuleiro() {
  for (vector<Peca *> linha : _casas) {
    for (Peca *peca_ptr : linha) {
      if (peca_ptr != nullptr) {
        delete peca_ptr;
      }
    }
  }
}

void Tabuleiro::movimenta(int linha, int col, bool diag_esq) {
  int tamanho = _casas.size();
  if (linha < 0 || col < 0) {
    throw ForaDoMapaException();
  }
  if (linha >= tamanho || col >= tamanho) {
    throw ForaDoMapaException();
  } 
  if (_casas[linha][col] == nullptr) {
    throw SemPecaParaMover();
  }
  if (_casas[linha][col]->get_cor() != _da_vez) {
    throw NaoEhSuaVezException();
  }

  int delta_horiz = 0;
  int delta_vert = 0;
  if (_da_vez == Cor::VERMELHA && !diag_esq) {
    delta_horiz = 1;
    delta_vert = 1;
  } else if (_da_vez == Cor::VERMELHA && diag_esq) {
    delta_horiz = -1;
    delta_vert = 1;
  } else if (_da_vez == Cor::PRETA && !diag_esq) {
    delta_horiz = 1;
    delta_vert = -1;
  } else {
    delta_horiz = -1;
    delta_vert = -1;
  }

  int new_linha = linha + delta_vert;
  int new_col = col + delta_horiz;
  if (new_linha < 0 || new_col < 0) {
    throw ForaDoMapaException();
  }
  if (new_linha >= tamanho || new_col >= tamanho) {
    throw ForaDoMapaException();
  }
  
  if (_casas[new_linha][new_col] == nullptr) {
    _casas[new_linha][new_col] = _casas[linha][col];
    _casas[linha][col] = nullptr;
  } else {
    if (_casas[new_linha][new_col]->get_cor() == _da_vez) {
      throw NaoEhSuaVezException();
    } else {
      if (_da_vez == Cor::VERMELHA && !diag_esq) {
        delta_horiz = 1;
        delta_vert = 1;
      } else if (_da_vez == Cor::VERMELHA && diag_esq) {
        delta_horiz = -1;
        delta_vert = 1;
      } else if (_da_vez == Cor::PRETA && !diag_esq) {
        delta_horiz = 1;
        delta_vert = -1;
      } else {
        delta_horiz = -1;
        delta_vert = -1;
      }
      int inimgo_linha = new_linha;
      int inimgo_col = new_col;
      new_linha = inimgo_linha + delta_vert;
      new_col = inimgo_col + delta_horiz;
      if (new_linha < 0 || new_col < 0) {
        throw ForaDoMapaException();
      }
      if (new_linha >= tamanho || new_col >= tamanho) {
        throw ForaDoMapaException();
      }
      if (_casas[new_linha][new_col] != nullptr) {
        throw CasaOcupadaException();
      }
      delete _casas[inimgo_linha][inimgo_col];
      _casas[inimgo_linha][inimgo_col] = nullptr;
      _casas[new_linha][new_col] = _casas[linha][col];
      _casas[linha][col] = nullptr;
    }
  }
  
  if (_da_vez == Cor::VERMELHA) {
    _da_vez = Cor::PRETA;
  } else {
    _da_vez = Cor::VERMELHA;
  }
}

void Tabuleiro::imprime() {
  for (vector<Peca *> linha : _casas) {
    for (Peca *peca_ptr : linha) {
      if (peca_ptr == nullptr) {
        cout << " [" << " " << "] ";  
      } else {
        cout << " [" << peca_ptr->get_cor() << "] ";
      }
    }
    cout << endl;
  }
  cout << "Daz vez: " << _da_vez << endl;
  cout << endl;
}