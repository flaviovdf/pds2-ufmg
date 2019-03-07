#include <iostream>
#include <string>
#include <map>

int main() {
  std::map<int,std::string> m;
  m.insert(std::pair<int,std::string>(2017123456, "Joao"));

  m[2016123456] = "Maria";
  m[2018123456] = "Carlos";
  m[2015123456] = "Jose";
  m[2014123456] = "Joana";

  std::map<int,std::string>::iterator it;
  for (it = m.begin(); it != m.end(); it++) {
    std::cout << it->first << ": " << it->second << std::endl;
  }
  return 0;
}
