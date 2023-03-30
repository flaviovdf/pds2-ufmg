#include <iostream>
int *aloca(int n) {
  return new int[n]();
}
int main() {
  int n = 20;
  auto data = aloca(n);
  for (int i = 0; i < n; i++) {
    data[i] = i * 2;
  }
  for (int i = 0; i < n*2; i++) {
    std::cout << data[i] << std::endl;
  }
  delete[] data;
  return 0;
}
