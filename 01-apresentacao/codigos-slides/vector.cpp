#include <iostream>
#include <vector>

int main()  {
  std::vector<int> dados = {};
  int v = 0;
  int i = 0;
  while (v >= 0) {
    std::cout << "Digite o " << i+1 << "-ésimo número (-1 para terminar): ";
    std::cin >> v;
    if (v < 0) break;
    dados.push_back(v);
  }

  for (int x : dados)
    std::cout << x << std::endl;;
}
