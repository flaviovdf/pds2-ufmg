class Matriz {
  private:
    int **_dados;
    int _n_linhas;
    int _n_colunas;

  public:
    Matriz(int n_linhas, int n_colunas) {
      _n_linhas = n_linhas;
      _n_colunas = n_colunas;
      _dados = new int*[_n_linhas]();
      for (int i = 0; i < _n_linhas; i++) {
        _dados[i] = new int[n_colunas]();
      }
    }
};
