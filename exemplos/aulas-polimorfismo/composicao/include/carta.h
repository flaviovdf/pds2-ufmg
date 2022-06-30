#ifndef PDS2_CARTA_H
#define PDS2_CARTA_H

#include <string> 

using namespace std;

class Carta {
private:
  string _nome;
protected:
  double _dano;
public:
  Carta(string nome, double dano);
  string get_nome();
  virtual double get_dano();
};

#endif