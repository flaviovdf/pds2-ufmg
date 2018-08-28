int fat(int n) {
  if (n <= 0) {
    return 1;
  }
  return n * fat(n-1);
}
