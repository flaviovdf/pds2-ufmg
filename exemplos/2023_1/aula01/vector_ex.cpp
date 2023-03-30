#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> vetor_de_dados;
  vetor_de_dados.push_back("Flavio");
  vetor_de_dados.push_back("Ana");
  vetor_de_dados.push_back("Gabriela");
  vetor_de_dados.push_back("Pedro");

  for (string nome : vetor_de_dados) {
    cout << nome << endl;
  }

}