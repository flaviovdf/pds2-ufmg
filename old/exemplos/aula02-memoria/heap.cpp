#include <iostream>
#include <stdlib.h>

// C
int *cria_um_vetor_zerado_c(int n) {
  int *rv = (int *) malloc(n * sizeof(int));
  for (int i = 0; i < n; i++)
    rv[i] = 0;
  return rv;
}

// C++
int *cria_um_vetor_zerado(int n) {
  int *rv = new int[n];
  for (int i = 0; i < n; i++)
    rv[i] = 0;
  return rv;
}

// C++
int *cria_um_vetor_zerado_stack(int n) {
  int rv[n];
  for (int i = 0; i < n; i++)
    rv[i] = 0;
  return rv;
}

int main() {
  std::cout << "Stack" << std::endl;
  int *vetor_stack = cria_um_vetor_zerado_stack(10);
  vetor_stack[0] = 9;
  for (int i = 0; i < 10; i++) {
    std::cout << vetor_stack[i] << std::endl;
  }

  std::cout << "Heap" << std::endl;
  int *vetor_heap = cria_um_vetor_zerado(10);
  for (int i = 0; i < 10; i++) {
    std::cout << vetor_heap[i] << std::endl;
  }

  std::cout << "C" << std::endl;
  int *vetor_c = cria_um_vetor_zerado_c(10);
  vetor_c[0] = 12;
  for (int i = 0; i < 10; i++) {
    std::cout << vetor_c[i] << std::endl;
  }

  std::cout << "Stack" << std::endl;
  for (int i = 0; i < 10; i++) {
    std::cout << vetor_stack[i] << std::endl;
  }
  
  free(vetor_c);
  delete[] vetor_heap;
}
