void f() {
  int *x = new int;
  delete x;
}

int main(void) {
  f();
}
