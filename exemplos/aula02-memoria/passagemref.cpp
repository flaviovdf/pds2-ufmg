#include <iostream>

int function(int *f) {
    std::cout << "Valor de f:" << f << std::endl;
    std::cout << "Valor de *f:" << *f << std::endl;
    f = f + 4;
    std::cout << "Valor de f:" << f << std::endl;
    std::cout << "Valor de *f:" << *f << std::endl;
    return *f;
}

int main() {
    int x = 7;
    int y = function(&x);
    std::cout << y << std::endl;
    std::cout << &y << std::endl;
    return 0;
}
