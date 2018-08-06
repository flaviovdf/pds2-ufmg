#include <iostream>
#include <string>

int main() {
  std::string hello("Olá mundo!\n");
  std::string hello2("Olá mundo!\n");
  if (hello == hello2) {
    std::cout << "c++ faz overload do == para strings!!!!.\n";
  }
  if (hello.compare(hello2) == 0) {
    std::cout << "Strings iguais.\n";
  }
  return 0;
}
