#ifndef PDS2_ENDERECO_H
#define PDS2_ENDERECO_H

#include <string>


struct endereco_t {
  std::string logradouro;
  std::string bairro;
  std::string cidade;
  int cep;
};


#endif
