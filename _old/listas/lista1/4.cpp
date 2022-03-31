#include <iostream>
#include <string>

int main () {
  std::string str1 ("laranja");
  std::string str2 ("laranja");
  if ( str1.compare(str2) )
    cout << "As strings sao iguais" << endl;
  return 0;
}