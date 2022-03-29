#ifndef PDS2_MENSAGEM_H
#define PDS2_MENSAGEM_H

#include <string>
#include <ctime>

class MensagemBase {
private:
  std::time_t _data;
  std::string _avatar;
public:
  MensagemBase(std::string avatar);
  std::time_t get_data() const;
  virtual std::string get_avatar() const;
  virtual void exibir() const = 0;
};

#endif
