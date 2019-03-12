#ifndef PDS2_MATRIZ_H
#define PDS2_MATRIZ_H
struct Matriz {
  // Dados
  int **_dados;
  int _n_linhas;
  int _n_colunas;

  // Construtor
  Matriz(int n_linhas, int n_colunas);

  // Destrutor
  ~Matriz();

  // Métodos
  int valor(int i, int j);
  Matriz soma(Matriz &outra);
};
#endif
