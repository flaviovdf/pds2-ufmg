#include <cassert>
#include <map>
#include <string>
#include <vector>

class ProcessadorTexto {
private:
  // guarda termo -> número de vezes em um documento
  std::map<std::string, std::vector<int>> _contagens;

  int _soma_um(std::string str) {
    assert(_contagens.count(str));
    int soma = 0;
    for (int count : _contagens[str]) {
      soma += count;
    }
    return soma;
  }
public:
  int soma_total() {
    int soma = 0;
    for (auto pair : _contagens) {
      soma += _soma_um(pair.first);
    }
    return soma;
  }
};
