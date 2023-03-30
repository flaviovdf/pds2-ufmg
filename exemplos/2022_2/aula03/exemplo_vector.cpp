#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
  vector<string> vec;
  vec.push_back("Flavio");
  vec.push_back("Pedro");
  vec.push_back("Ana");

  cout << "O vetor tem: ";
  cout << vec.size();
  cout << " elementos." << endl;

  for (string elemento : vec) {
    cout << elemento << " ";
  }

  cout << endl;

  int pos;
  cout << "Qual elemento? ";
  cout << endl;
  cin >> pos;
  cout << vec.at(pos);






  vector<int> v1;
  vector<string> v2;

  // v1.push_back("Flavio");


  vector<int> v_perguntas = {3, 1, 7};
  v_perguntas.front();
  v_perguntas.back();
  bool is_empty = v_perguntas.empty();
  v_perguntas.push_back(0);
  v_perguntas.pop_back();



  return 0;
}

