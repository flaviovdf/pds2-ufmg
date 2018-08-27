#include "virus.h"

int Virus::_infeccoes_totais = 0;

Virus::Virus(std::string nome, double forca, int capacidade_reproducao) {
  _nome = nome;
  _forca = forca;
  _capacidade_reproducao = capacidade_reproducao;
  _numero_filhos = 0;
  _filhos = new Virus[capacidade_reproducao];
}

Virus::~Virus() {
  delete[] _filhos;
}

std::string Virus::get_nome() {
  return _nome;
}

double Virus::get_forca() {
  return _forca;
}

Virus *Virus::reproduzir() {
  if (this->_numero_filhos == this->_capacidade_reproducao) {
    return nullptr;
  }
  // Aloca uma um novo filho.
  Virus novo_virus = Virus(_nome, _forca, _capacidade_reproducao);
  _filhos[_numero_filhos] = novo_virus;     // Guarda copia em um vetor
  _infeccoes_totais++;                      // Aumenta o número de infeccoes
  _numero_filhos += 1;                      // Aumenta o número de filhos
  return &_filhos[_numero_filhos - 1];      // Retorna ponteiro para copia
}

int Virus::get_infeccoes_totais() {
  return Virus::_infeccoes_totais;
}
