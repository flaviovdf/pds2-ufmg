#include "exemplo_static.h"

int main(void) {
  Teste teste1 = Teste();
  Teste *teste2 = new Teste();
  delete teste2;
}
