#ifndef PDS2_CARRO_H
#define PDS2_CARRO_H

#include <string>

class Carro {
  private:
    std::string _cor;
  public:
    Carro(std::string cor);
    std::string get_cor();
};

#endif