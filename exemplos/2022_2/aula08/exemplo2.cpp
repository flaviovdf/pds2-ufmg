#include <iostream>
#include <set>

void remove_menor_que(std::set<int> &set, int v) {
  std::set<int> para_remover;
  for (int dado : set) {
    if (dado < v) {
      para_remover.insert(dado);
    }
  }
  for (int dado : para_remover) {
    set.erase(dado);
  }
}

int main() {
  std::set<int> set = {4, 3, 7, 0};
  remove_menor_que(set, 4); // {4, 7}
  for (int dado : set) {
    std::cout << dado << std::endl;
  }
} 