#include <iostream>
#include <string>
#include <vector>

void adiciona_algo(std::vector<std::string> &vec) {
  vec.push_back("NAO!");
}

int main() {
  std::vector<std::string> v = {"oi", "tudo", "bem?"};
  for (auto s : v) {
    std::cout << s << std::endl;
  }
  adiciona_algo(v);
  for (auto s : v) {
    std::cout << s << std::endl;
  }
  return 0;
}