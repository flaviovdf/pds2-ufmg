#include "mensagem.h"

#include <chrono>
#include <ctime>

MensagemBase::MensagemBase(std::string avatar) {
  auto now = std::chrono::system_clock::now();
  auto time_t_now = std::chrono::system_clock::to_time_t(now);
  this->_data = time_t_now;
  this->_avatar = avatar;
}

std::time_t MensagemBase::get_data() const {
  return this->_data;
}

std::string MensagemBase::get_avatar() const {
  return this->_avatar;
}
