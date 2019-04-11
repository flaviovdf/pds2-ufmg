#include <string>

class Carta {
protected:
  int _dano;
public:
  Carta(int dano, std::string nome);
  virtual int get_dano();
  std::string get_nome();
};

class CartaBoost : public Carta {
private:
  int _boost;
  std::string _nome;
  Carta *original;
public:
  CartaBoost(int boost, std::string nome);
  virtual int get_dano() override;
};

int Carta::get_dano() {
  return this->_dano;
}

int CartaBoost::get_dano() {
  return Carta::_dano + _boost;
}

int main() {
  Carta c(2, "Monstro");
  CartaBoost boost(3, "Boost");
  boost.get_nome();

  const Carta c3(3, "a");
}
