#ifndef PDS2_UBER_BUSCA_H
#define PDS2_UBER_BUSCA_H

#include <exception>

class uber_exception : public std::exception {
  virtual const char *what() const noexcept override {
    return "Erro genérico de uber!";
  }
};
class latitude_exception : public uber_exception {
  virtual const char *what() const noexcept override {
    return "Erro de latitude";
  }
};
class longitude_exception : public uber_exception {

};
class sem_carro_exception : public uber_exception {

};


class BuscaUber {
  private:
    unsigned int _carros_disponiveis;
  public:
    BuscaUber();
    double busca_rota(
      int lat, int longitude
    );
};

#endif