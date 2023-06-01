#ifndef PDS2_UBER_H
#define PDS2_UBER_H

#include <string>


class Uber {
  private:
    std::string _cor;
    unsigned int _placa;
  public:
    Uber(
      std::string cor,
      unsigned int placa
    );
    std::string get_cor();
    unsigned int get_placa();
    virtual double get_preco();
    virtual unsigned int get_num_passageiros();
};


#endif