#ifndef PDS2_PACIENTE_H
#define PDS2_PACIENTE_H

#include <string>

#include "virus.h"

class Paciente {
private:
  std::string _nome;
  double _resistencia;
  bool _infectado;
public:
  Paciente(std::string nome, double resistencia);
  bool esta_infectado();
  std::string get_nome();
  void contato(Paciente &contato);
  void curar();
};

#endif
