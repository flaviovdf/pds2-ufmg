#include <stdlib.h>
int main(void) {
  //Dois erros aqui
  int *data = malloc(10 * sizeof(int));
  data = NULL;
  data[2] = 20;
  return 0;
}
