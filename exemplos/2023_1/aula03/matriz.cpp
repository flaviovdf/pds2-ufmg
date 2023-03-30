#include <iostream>
#include <vector>

using namespace std;

class Matriz {
  private:
    unsigned int _nlinhas;
    unsigned int _ncolunas;
    vector<vector<double>> _dados;
  public:
    Matriz(
      unsigned int nlinhas, 
      unsigned int ncolunas
    ) {
      for (int linha = 0; linha < nlinhas; linha++) {
        vector<double> dados_linha;
        _dados.push_back(dados_linha);

        for (int coluna = 0; coluna < ncolunas; coluna++) {
          _dados[linha].push_back(0);
        }
      }
      _nlinhas = nlinhas;
      _ncolunas = ncolunas;
    }

    void seta(int linha, int coluna, double valor) {
      if (linha >= _nlinhas || coluna >= _ncolunas) {
        cout << "Não consigo setar nessa pos" << endl;
        return;
      }
      _dados[linha][coluna] = valor;
    }

    Matriz soma(Matriz outra) {
      if (outra._ncolunas != _ncolunas) {
        cout << "Não consigo somar tamanhos diferentes" << endl;
        return Matriz(0, 0); // FEIO! NAO FAÇA
      }
      if (outra._nlinhas != _nlinhas) {
        cout << "Não consigo somar tamanhos diferentes" << endl;
        return Matriz(0, 0);
      }

      Matriz retorno = Matriz(_nlinhas, _ncolunas);

      for (int linha = 0; linha < _nlinhas; linha++) {
        for (int coluna = 0; coluna < _ncolunas; coluna++) {
          double soma = _dados[linha][coluna] + \
                        outra._dados[linha][coluna];
          retorno._dados[linha][coluna] = soma;
        }
      }

      return retorno;
    }

    void imprimir() {
      for (int linha = 0; linha < _nlinhas; linha++) {
        for (int coluna = 0; coluna < _ncolunas; coluna++) {
          cout << _dados[linha][coluna] << " ";
        }
        cout << endl;
      }
      cout << endl;
      cout << endl;
    }
};


int main() {
  Matriz m1 = Matriz(3, 2);
  m1.seta(0, 0, 1);
  m1.seta(2, 0, 3);
  m1.imprimir();

  Matriz m2 = Matriz(3, 2);
  m2.seta(0, 0, 2);
  m2.seta(0, 1, 3);
  m2.seta(1, 1, 1);
  m2.seta(2, 1, 3);
  m2.imprimir();

  Matriz m3 = m1.soma(m2);
  m3.imprimir();
}

