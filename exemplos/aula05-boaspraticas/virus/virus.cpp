#include <iostream>
#include "virus.h"

int Virus::_infeccoes_totais = 0;

Virus::Virus(std::string nome, double forca, int capacidade_reproducao) {
  _nome = nome;
  _forca = forca;
  _capacidade_reproducao = capacidade_reproducao;
  _numero_filhos = 0;
  _filhos = new Virus*[capacidade_reproducao]();
  for (int i = 0; i < _numero_filhos; i++)
    _filhos[i] = nullptr;
  Virus::_infeccoes_totais++;
}

Virus::~Virus() {
  if (_filhos != nullptr) {
    for (int i = 0; i < _numero_filhos; i++)
      if (_filhos[i] != nullptr)
        delete _filhos[i];
    delete[] _filhos;
  }
}

std::string Virus::get_nome() {
  return _nome;
}

double Virus::get_forca() {
  return _forca;
}

Virus *Virus::reproduzir() {
  if (_numero_filhos == _capacidade_reproducao) {
    return nullptr;
  }
  // Aloca uma cópia
  Virus *novo_virus = new Virus(_nome, _forca, _capacidade_reproducao);
  _filhos[_numero_filhos] = novo_virus;     // Guarda copia em um vetor
  _numero_filhos++;                         // Aumenta o número de filhos
  return _filhos[_numero_filhos - 1];      // Retorna ponteiro para copia
}

int Virus::get_infeccoes_totais() {
  return Virus::_infeccoes_totais;
}

std::string Virus::to_string() {
  return "Nome " + _nome + "::Filhos " + std::to_string(_numero_filhos) + "\n";
}
