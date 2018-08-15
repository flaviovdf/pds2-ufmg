#include <stdio.h>
#include <stdlib.h>

//C
int *cria_um_vetor_zerado_c(int n) {
    int rv[n];
    for (int i = 0; i < n; i++)
        rv[i] = 0;
    return rv;
}

int main() {
  int *vetor = cria_um_vetor_zerado_c(10);
  printf("%d\n", vetor[0]);
}
