#include <iostream>

int main() {
    int **mat = new int[2][2];
    mat[0][0] = 2;
    mat[0][1] = 3;
    mat[1][0] = 9;
    mat[1][1] = 8;

    delete mat;
}
