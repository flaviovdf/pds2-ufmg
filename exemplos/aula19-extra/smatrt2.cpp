#include <cassert>
#include <stdexcept>
#include <iostream>

class Printable {
public:
  virtual void imprime() = 0;
  virtual int qq_coisa() = 0;
};

class Localizavel {
public:
  virtual std::string get_location() = 0;
  virtual int qq_coisa() = 0;
};

class Reais : public Printable, public Localizavel {
private:
  unsigned int _parte_real;
  unsigned short _centavos;
public:
  Reais(unsigned int parte_real, unsigned short centavos) {
    if (centavos >= 100) {
      throw std::invalid_argument("Centavos deve ser < 100");
    }
    this->_parte_real = parte_real;
    this->_centavos = centavos;
  }

  virtual void imprime() override {
    std::cout << this->_parte_real << "," << this->_centavos << std::endl;
  }

  virtual std::string get_location() override {
    return "BR";
  }

  virtual int qq_coisa() override { return 0; }
};

class Object {
public:
  void blah() {
    std::cout << "blah" << std::endl;
  }
};

int main() {
  Reais *r = new Reais(10, 2);
  r->get_location();

  Object *lixo = dynamic_cast<Object *>(r);
  if (lixo) {
    lixo->blah();
  }
}
