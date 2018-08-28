#ifndef PDS2_MATRIZ_H
#define PDS2_MATRIZ_H


class Matriz {
private:
  int **_dados;
  int _n_linhas;
  int _n_colunas;
public:
  // Construtor
  Matriz(int n_linhas, int n_colunas);

  // Destrutor
  ~Matriz();

  // . . . Vários outros métodos da matriz . . . //
};


#endif
