#ifndef PDS2_GOPLAY_H
#define PDS2_GOPLAY_H


#include <map>
#include "item.h"
#include "usuario.h"
#include "midia.h"


class GoPlay {
private:
  static double const ALUGUEL_NORMAL;
  static double const COMPRA_NORMAL;
  static double const ALUGUEL_LANCAMENTO;
  static double const COMPRA_LANCAMENTO;
  static double const ALUGUEL_SERIE;
  static double const COMPRA_SERIE;

  int _codigo_midia;
  int _codigo_usuario;
  std::map<int, Usuario *> _usuarios;
  std::map<int, Midia *> _midias;
  int _adicionar_midia(Midia *midia);
  void _realiza_operacao(int id_usuario, int id_midia, bool aluguel);
public:
  GoPlay();
  ~GoPlay();
  int adicionar_usuario(std::string nome);
  int adicionar_lancamento(std::string nome);
  int adicionar_serie(std::string nome);
  int adicionar_normal(std::string nome);
  int mudar_tipo(int id_midia, Tipo tipo);
  void realiza_aluguel(int id_usuario, int id_midia);
  void realiza_compra(int id_usuario, int id_midia);
  Usuario &get_usuario(int id_usuario);
};


#endif
