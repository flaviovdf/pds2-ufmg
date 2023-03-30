#include <string>

class Carta {
protected:
  int _dano;
public:
  Carta(int dano, std::string nome);
  virtual int get_dano();
  std::string get_nome();
};

int Carta::get_dano() {
  return this->_dano;
}

class CartaBoost : public Carta {
private:
  Carta _boostada;
  int _boost;
  std::string _nome;
public:
  CartaBoost(Carta boostada, int boost,
             std::string nome);
  void add_boost(Carta *outra);
  virtual int get_dano() override;
};

int CartaBoost::get_dano() {
  return _boostada.get_dano() + _boost;
}


int main() {
  Carta capeta = Carta(20, "Capeta");
  Carta happy_card = Carta(5, "^.^");

  CartaBoost capeta_sao_joao = CartaBoost(
    capeta, 20, "CapetaSJ"
  );

  CartaBoost happy_sao_joao = CartaBoost(
    happy_card, 20, "CapetaSJ"
  );
}
