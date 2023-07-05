#include <iostream>

using namespace std;

class A {
  public:
    virtual void g() {
      cout << "Sou o metodo g" << endl;
    }
    virtual void f() = 0;
};

class B : public A {
  public:
    void f() override {
      cout << "Sou o metodo f" << endl;
    }
};

int main() {
  B b;
  b.g();
  b.f();
}
