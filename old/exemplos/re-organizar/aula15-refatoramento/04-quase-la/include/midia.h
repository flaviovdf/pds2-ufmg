#ifndef PDS2_MIDIA_H
#define PDS2_MIDIA_H

#include <string>


enum Tipo {NORMAL, LANCAMENTO, EPISODIO_SERIE};


class Midia {
private:
  std::string _nome;
  double _preco_aluguel;
  double _preco_compra;
  Tipo _tipo;
public:
  Midia(std::string nome, double preco_aluguel, double preco_compra, Tipo tipo);
  Tipo get_tipo();
  std::string get_nome();
  double get_preco_aluguel();
  double get_preco_compra();
};


#endif
