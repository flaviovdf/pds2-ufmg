#include <stdlib.h>
int main(void) {
  //Qual o Erro Aqui?
  int *data = malloc(10 * sizeof(int));
  free(data);
  free(data);
  return 0;
}
