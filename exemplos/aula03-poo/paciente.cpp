#include <string>
#include <vector>

class Paciente {
private:
  std::string nome;
  bool infectado;
  double resistencia;
public:
  Paciente(std::string nome, double resistencia) {
    this->nome = nome;
    this->resistencia = resistencia;
  }
  bool esta_infectado() {
    return infectado;
  }
  std::string get_nome() {
    return this->nome;
  }
  void infectar(double forca_virus) {
    if (forca_virus > this->resistencia) {
      this->infectado = true;
    }
  }
  void curar() {
    this->infectado = false;
  }
};
