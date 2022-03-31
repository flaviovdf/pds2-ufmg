#ifndef PDS2_USUARIO_H
#define PDS2_USUARIO_H


#include <string>
#include <vector>
#include "item.h"


class Usuario {
private:
  std::string _nome;
  std::vector<Item> _midias;
  // . . . campos estilo cartões de crédito, serviços etc.
public:
  Usuario(std::string nome);
  void inserir_item(Item item);
  double total_gastos();
};


#endif
