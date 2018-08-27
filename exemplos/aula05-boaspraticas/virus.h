#ifndef PDS2_VIRUS_H
#define PDS2_VIRUS_H

#include <string>

class Virus {
private:
  // Conta quantas infeccções todos os virus já causaram.
  static int _global_infeccoes;

  // Conta quantas infecções este virus causou
  int _local_infeccoes;

  // Guarda os filhos alocados
  Virus *_filhos;

  // Número de filhos
  int _numero_filhos;

  // Nome do virus;
  std::string _nome;

  // Forca do virus;
  double _forca;

  // Capacidade de reproducao limita o numero de _numero_filhos
  int _capacidade_reproducao;
public:
  // Construtor para ser utilizado fora da classe
  Virus(std::string nome, double forca, int capacidade_reproducao);

  // Destrutor para desalocar os filhos
  ~Virus();

  // Retorna o nome do virus
  std::string get_nome();

  // Retorna a força do virus
  double get_forca();

  // Reproduz o virus
  Virus *reproduzir();

  // Retorna quantas infeccções todos os virus já causaram.
  static int get_global_infeccoes();

  // Retorna quantas infeccções este virus já causou
  int get_local_infeccoes();
};


#endif
