#ifndef TAB_PDS2
#define TAB_PDS2

#include <exception>
#include <vector>

#include "peca.h"

using namespace std;

class ErroDeJogoException : public std::exception {
  public:
  virtual const char* what() const noexcept {
    return "Erro Genérico!";
  }
};
class ForaDoMapaException :public ErroDeJogoException {
  public:
    virtual const char* what() const noexcept {
      return "Fora do Mapa";
    }
};
class CasaOcupadaException : public ErroDeJogoException {
  public:
  virtual const char* what() const noexcept {
    return "Casa Ocupada";
  }
};
class NaoEhSuaVezException: public ErroDeJogoException {
  public:
  virtual const char* what() const noexcept {
    return "Não é sua vez!";
  }
};
class SemPecaParaMover: public ErroDeJogoException {
  public:
  virtual const char* what() const noexcept {
    return "Sem Peca na Casa!";
  }
};

class Tabuleiro {
  private:
    vector<vector<Peca *>> _casas;
    Cor _da_vez;
  public:
    Tabuleiro();
    ~Tabuleiro();
    void imprime();
    void movimenta(
      int linha,
      int coluna,
      bool diag_esq) throw(ErroDeJogoException);
};

#endif