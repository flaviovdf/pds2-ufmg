class Pessoa {
  private:
    unsigned int _idade = 0;
  public:
    void feliz_aniversario() {
      _idade++;  
    }
};

void passou_um_ano(Pessoa &p) {
  p.feliz_aniversario();
}

int main() {
  Pessoa p;
  passou_um_ano(p);
}

