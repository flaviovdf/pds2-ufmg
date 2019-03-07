#include <iostream>

class Midia {
public:
  virtual void exibir() = 0;
};

class Imagem : public Midia {
  virtual void exibir() override {
    std::cout << "sou uma image\n";
  }
};

class Video : public Midia {
  virtual void exibir() override {
    std::cout << "sou um video\n";
  }
};

class Patrocinado : public Midia{
private:
  Midia *midia;
public:
  Patrocinado(Midia *midia) {
    this->midia = midia;
  }
  virtual void exibir() override {
    this->midia->exibir()
  }
};
