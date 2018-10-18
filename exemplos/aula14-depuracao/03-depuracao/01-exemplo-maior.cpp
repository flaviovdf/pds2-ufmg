#include <iostream>

int find_max(int *array, int len, int &max) {
  max = array[0];
  for(int i = 1; i < len; i++) {
    if(max < array[i]) {
      max = array[i];
    }
  }
  return 0;
}

int main() {
  int arr[5] = {17, 21, 44, 2, 60};
  int max;
  if (find_max(arr, 5, max) != 0) {
    std::cout << "Ocorreu erro!" << std::endl;
    return 1;
  }
  std::cout << "Valor maximo e: " << max << std::endl;
  return 0;
}
