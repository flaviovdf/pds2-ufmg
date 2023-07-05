#ifndef PDS2_MIDIA_H
#define PDS2_MIDIA_H

#include <string>


enum Tipo {NORMAL, LANCAMENTO, EPISODIO_SERIE};


class Midia {
private:
  std::string _nome;
  Tipo _tipo;
public:
  Midia(std::string nome, Tipo tipo);
  Tipo get_tipo();
  std::string get_nome();
};


#endif
