#include <set>
#include <iostream>

using namespace std;

int main() {
  std::set<int> s;

  s.insert(3);
  s.insert(0);
  s.insert(5);

  // for (int elemento : s) {
  //   cout << elemento << endl;
  // }

  cout << s.size() << endl;

  s.insert(-1);

  cout << s.size() << endl;




}
