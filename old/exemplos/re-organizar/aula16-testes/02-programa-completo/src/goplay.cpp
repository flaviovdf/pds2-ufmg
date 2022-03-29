#include "goplay.h"

double const GoPlay::ALUGUEL_NORMAL = 7.0;
double const GoPlay::COMPRA_NORMAL = 15.0;

double const GoPlay::ALUGUEL_LANCAMENTO = 16.0;
double const GoPlay::COMPRA_LANCAMENTO = 32.0;

double const GoPlay::ALUGUEL_SERIE = 3.50;
double const GoPlay::COMPRA_SERIE = 12.0;

GoPlay::GoPlay() {
  this->_codigo_midia = 0;
  this->_codigo_usuario = 0;
}

GoPlay::~GoPlay() {
  for (auto pair : this->_usuarios) {
    delete pair.second;
  }
  for (auto pair : this->_midias) {
    delete pair.second;
  }
}

int GoPlay::adicionar_usuario(std::string nome) {
  int codigo_atual = this->_codigo_usuario++;
  Usuario *usuario = new Usuario(nome);
  this->_usuarios.insert(std::pair<int, Usuario *>(codigo_atual, usuario));
  return codigo_atual;
}

int GoPlay::_adicionar_midia(Midia *midia) {
  int codigo_atual = this->_codigo_midia++;
  this->_midias.insert(std::pair<int, Midia *>(codigo_atual, midia));
  return codigo_atual;
}

int GoPlay::adicionar_serie(std::string nome) {
  Midia *midia = new Midia(nome, ALUGUEL_SERIE, COMPRA_SERIE,
                           Tipo::EPISODIO_SERIE);
  return this->_adicionar_midia(midia);
}

int GoPlay::adicionar_lancamento(std::string nome) {
  Midia *midia = new Midia(nome, ALUGUEL_LANCAMENTO, COMPRA_LANCAMENTO,
                           Tipo::LANCAMENTO);
  return this->_adicionar_midia(midia);
}

int GoPlay::adicionar_normal(std::string nome) {
  Midia *midia = new Midia(nome, ALUGUEL_NORMAL, COMPRA_NORMAL,
                           Tipo::LANCAMENTO);
  return this->_adicionar_midia(midia);
}

void GoPlay::_realiza_operacao(int id_usuario, int id_midia, bool aluguel) {
  Midia &midia = *this->_midias[id_midia];
  Usuario &usuario = *this->_usuarios[id_usuario];
  if (aluguel) {
    Item item(midia, midia.get_preco_aluguel(), aluguel);
    usuario.inserir_item(item);
  } else {
    Item item(midia, midia.get_preco_compra(), aluguel);
    usuario.inserir_item(item);
  }
}

void GoPlay::realiza_aluguel(int id_usuario, int id_midia) {
  this->_realiza_operacao(id_usuario, id_midia, true);
}

void GoPlay::realiza_compra(int id_usuario, int id_midia) {
  this->_realiza_operacao(id_usuario, id_midia, false);
}

Usuario &GoPlay::get_usuario(int id_usuario) {
  return *this->_usuarios[id_usuario];
}
