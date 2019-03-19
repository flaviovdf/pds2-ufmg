
void f() {
  int *x = new int[10];
  x[9] = 0;
  delete[] x;
}

int main() {
 f();
 return 0;
}
