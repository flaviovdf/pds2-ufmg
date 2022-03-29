#include <iostream>

int *multiplica(int *vetor1, int *vetor2, int n) {
    int *resposta = new int[n];
    for (int i = 0; i < n; i++)
        resposta[i] = vetor1[i] * vetor2[i];
    return resposta;
}

void multiplica2(int *vetor1, int *vetor2,
                int *resposta, int n) {
    for (int i = 0; i < n; i++)
        resposta[i] = vetor1[i] * vetor2[i];
}

int main() {
    int vetor1[3] = {10, 9, 7};
    int vetor2[3] = {1, 3, 2};
    int vetorResposta[3];
    multiplica2(vetor1, vetor2, vetorResposta, 3);
    // int *resposta = multiplica(vetor1, vetor2, 3);
    // for (int i = 0; i < 3; i++)
    //    std::cout << resposta[i];
    // delete[] resposta;
}
