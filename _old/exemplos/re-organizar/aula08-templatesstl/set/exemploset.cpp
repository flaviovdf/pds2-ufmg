#include <iostream>
#include <set>

int main() {
  std::set<int> s;
  for(int i = 1; i <= 10; i++) {
    s.insert(i);
  }
  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }

  s.insert(7);

  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }
  for(int i = 2; i <= 10; i += 2) {
    s.erase(i);
  }

  std::cout << "(" << s.size() << ")" << std::endl;
  for (int e : s) {
     std::cout << e << std::endl;
  }
  return 0;
}
