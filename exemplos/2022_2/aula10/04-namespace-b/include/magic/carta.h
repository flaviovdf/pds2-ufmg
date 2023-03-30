#ifndef PDS2_CARTAMAGIC_H
#define PDS2_CARTAMAGIC_H

#include <string>

namespace magic {
  struct Carta {

    std::string _nome;
    double _dano;

    Carta(std::string nome, double dano);
    double get_dano() const;
    std::string get_nome() const;
  };
}

#endif
