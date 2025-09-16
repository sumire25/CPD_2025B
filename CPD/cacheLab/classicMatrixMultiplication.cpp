#include <iostream>
#include <vector>
#include <random>

#define MSIZE 1000
#define VVD std::vector<std::vector<double>>

void classicMatrixMultiplication(VVD& A, VVD& B, VVD& C) {
    for (int i = 0; i < MSIZE; i++)
        for (int j = 0; j < MSIZE; j++)
            for (int k = 0; k < MSIZE; k++)
                C[i][j] += A[i][k] * B[k][j];
}

int main() {
    VVD A(MSIZE, std::vector<double>(MSIZE));
    VVD B(MSIZE, std::vector<double>(MSIZE));
    VVD C(MSIZE, std::vector<double>(MSIZE, 0));

    classicMatrixMultiplication(A, B, C);

    return 0;
}