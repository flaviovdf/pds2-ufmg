#include "goplay.h"

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

int GoPlay::adicionar_midia(std::string nome, Tipo tipo) {
  int codigo_atual = this->_codigo_midia++;
  Midia *midia = new Midia(nome, tipo);
  this->_midias.insert(std::pair<int, Midia *>(codigo_atual, midia));
  return codigo_atual;
}

void GoPlay::realiza_aluguel(int id_usuario, int id_midia) {
  Usuario &usuario = *this->_usuarios[id_usuario];
  usuario.inserir_item(Item(*this->_midias[id_midia], false));
  this->_usuarios[id_usuario];
}

void GoPlay::realiza_compra(int id_usuario, int id_midia) {
  Usuario &usuario = *this->_usuarios[id_usuario];
  usuario.inserir_item(Item(*this->_midias[id_midia], true));
  this->_usuarios[id_usuario];
}

Usuario &GoPlay::get_usuario(int id_usuario) {
  return *this->_usuarios[id_usuario];
}
