#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <string>

using namespace std;

int main() {
  set<string> de_interesse = {"Darcy", "Elizabeth"};
  
  map<string, unsigned long> contagens;
  ifstream livro = ifstream("pp.txt");
  string palavra = "";
  while(!livro.eof()) {
    livro >> palavra;

    if (de_interesse.find(palavra) == de_interesse.end()) {
      continue;
    }

    if (contagens.find(palavra) == contagens.end()) {
      contagens[palavra] = 1;
    } else {
      contagens[palavra] = contagens[palavra] + 1;
    }
  }

  ofstream saida = ofstream("conta.txt");
  auto it = contagens.begin();
  while (it != contagens.end()) {
    saida << it-> first << " " << it->second << endl;
    it = next(it);
  }
  saida.close();
  livro.close();
}