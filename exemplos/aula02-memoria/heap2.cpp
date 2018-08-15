#include <iostream>

// C++
int *cria_um_vetor_zerado(int n) {
  int *rv = new int[n];
  for (int i = 0; i < n; i++)
    rv[i] = 0;
  return rv;
}

int main() {
  std::cout << "Heap" << std::endl;
  int *vetor_heap = cria_um_vetor_zerado(10);
  vetor_heap[0] = 10;
  for (int i = 0; i < 10; i++) {
    std::cout << vetor_heap[i] << std::endl;
  }
  delete[] vetor_heap;
}
