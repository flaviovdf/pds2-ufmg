#include <iterator>
#include <map>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void imprime_agenda(map<string, string> agenda) {
  auto it = agenda.begin();
  for (pair<string, string> entrada : agenda) {
    cout << "O número de " << entrada.first << endl;
    cout << "   e:" << entrada.second << endl;
  }
  // while (it != agenda.end()) {
  //   pair<string, string> entrada = *it;
  //   cout << "O número de " << entrada.first << endl;
  //   cout << "   e:" << entrada.second << endl;
  //   it = next(it);
  // }
}

int main() {
  map<string, unsigned int> agenda;
  
  agenda["Flavio"] = 31998728271;
  agenda["Pedro"] = 31998828272;
  imprime_agenda(agenda);


  // cout << agenda.at("Flavio") << endl;
  // if (agenda.count("Ana") > 0) {
  //   cout << "Telefone da Ana" << endl;
  //   cout << agenda.at("Ana") << endl;
  // } else {
  //   cout << "Não tenho esse telefone!" << endl;
  // }

  return 0;
}