#include <iostream>

class TipoA {};
class TipoB : public TipoA {};
class TipoC : public TipoB {};

void f(TipoA *a) {

}

void g(TipoB *a) {

}

void h(TipoC *a) {

}

int main() {
  TipoA *a = new TipoA();
  TipoA *b = new TipoB();
  TipoA *c = new TipoC();

  f(a);
  g(b);
  h(c);
}
