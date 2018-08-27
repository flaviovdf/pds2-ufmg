#include "virus.h"

int Virus::_global_infeccoes = 0;

Virus::Virus(std::string nome, double forca, int capacidade_reproducao) {
  _nome = nome;
  _forca = forca;
  _capacidade_reproducao = capacidade_reproducao;
  _local_infeccoes = 0;
  _numero_filhos = 0;
}

std::string Virus::get_nome() {
  return _nome;
}

double Virus::get_forca() {
  return _forca;
}

Virus *Virus::reproduzir() {
  Virus *novo_virus = new Virus(_nome, _forca, _capacidade_reproducao);
  novo_virus->_local_infeccoes = 1;
  _filhos[_numero_filhos - 1] = novo_virus;
  
  return novo_virus;
}

int Virus::get_local_infeccoes() {
  return Virus::_global_infeccoes;
}

int Virus::get_global_infeccoes() {
  return Virus::_global_infeccoes;
}
