#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
  map<string, int> telefones;
  telefones["Flavio"] = 1;
  telefones["Ana"] = 2;
  telefones["Julia"] = 3;
  auto it = telefones.begin();
  while (it != telefones.end()) {
    cout << it->first << " : " << it->second << endl;
    it = next(it);
  }
  return 0;
}
