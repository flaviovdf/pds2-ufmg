class Matriz {
  private:
    int **_dados;
  public:
    Matriz(int n_linhas, int n_colunas) {
      _dados = new int*[n_linhas]();
      for (int i = 0; i < n_linhas; i++) {
        _dados[i] = new int[n_colunas]();
      }
    }
};
void qq_coisa() {
  Matriz matriz = Matriz(10, 10);
}
int main() {
  qq_coisa();
  //aqui
  //. . . 
}