#include <string>
#include <list>
#include <set>

using namespace std;

struct compara_tamanho_f {
  bool operator()(const string &s1, const string &s2) const {
    return s1.size() < s2.size();
  }
};



class ComparaStr {
  public:
    virtual bool compara(string s1, string s2) = 0;
};

class ComparaStrTamanho : public ComparaStr {
  public:
    bool compara(string s1, string s2) override {
      return s1.size() < s2.size();
    }
};

class ComparaStrPrimeiroCaractere : public ComparaStr {
  public:
    bool compara(string s1, string s2) override {
      return s1[0] < s2[0];
    }
};

void insere_ordenado(string s, list<string> lista, compara_tamanho_f &criterio) {
  auto pos = lista.begin();
  while (pos != lista.end()) {
    if (criterio(s, *pos)) {
      pos = next(pos);
    } else {
      break;
    }
  }
  lista.insert(pos, s);
}

class Banco {
  public:
    int get_agencia();
};

class compara_banco_f {
  bool operator()(const Banco &b1, const Banco &b2) const {
    return b1.get_agencia() < b2.get_agencia();
  }
};

int main() {
  // set<string, compara_tamanho_f> s;
  set<Banco> sb;
}