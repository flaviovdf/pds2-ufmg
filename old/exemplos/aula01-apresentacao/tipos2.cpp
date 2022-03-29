#include <iostream>

int main()  {
  double num1 = 0.0;
  double num2 = 0.0;
  std::cout << "Digite o primeiro número: ";
  std::cin >> num1;
  std::cout << "Digite o segundo número: ";
  std::cin >> num2;
  std::cout << "A divisão de " << num1 << " e " \
    << num2 << " é " << num1/num2 << ".\n";
  return 0;
}
