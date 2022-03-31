#include <memory>
#include <iostream>
#include <stdexcept>
#include <string>
#include <cstdio>

class Object {
private:
  std::string const _msg;
public:
  Object(std::string msg): _msg(msg) {}

  void imprime() {
    std::cout << _msg << std::endl;
  }
};

void f() {
  Object *o = new Object("Oi");
  o->imprime();
}


int main() {
  std::shared_ptr<Object> o = std::make_shared<Object>("Oi");
  std::weak_ptr<Object> o2 = o;
  o = nullptr;
  std::cout << o.use_count() << std::endl;
  o->imprime();
}
