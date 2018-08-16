#include <string>

class Virus {
private:
  std::string nome;
  double forca;
public:
  bool get_forca();
  Virus &reproduzir();
};
