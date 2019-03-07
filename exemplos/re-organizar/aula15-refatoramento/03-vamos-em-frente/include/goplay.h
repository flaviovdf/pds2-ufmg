#ifndef PDS2_GOPLAY_H
#define PDS2_GOPLAY_H


#include <map>
#include "item.h"
#include "usuario.h"
#include "midia.h"


class GoPlay {
private:
  int _codigo_midia;
  int _codigo_usuario;
  std::map<int, Usuario *> _usuarios;
  std::map<int, Midia *> _midias;
public:
  GoPlay();
  ~GoPlay();
  int adicionar_usuario(std::string nome);
  int adicionar_midia(std::string nome, Tipo tipo);
  void realiza_aluguel(int id_usuario, int id_midia);
  void realiza_compra(int id_usuario, int id_midia);
  Usuario &get_usuario(int id_usuario);
};


#endif
