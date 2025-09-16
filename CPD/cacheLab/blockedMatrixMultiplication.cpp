#include <iostream>
#include <vector>
#include <random>

#define MSIZE 1000
#define BSIZE 100

#define VVD std::vector<std::vector<double>>

void blockedMatrixMultiplication(VVD& A, VVD& B, VVD& C) {
    for (int blockI = 0; blockI < MSIZE; blockI += BSIZE) {
        for (int blockJ = 0; blockJ < MSIZE; blockJ += BSIZE) {
            for (int blockK = 0; blockK < MSIZE; blockK += BSIZE) {
                for (int i = blockI; i < blockI + BSIZE; i++) {
                    for (int j = blockJ; j < blockJ + BSIZE; j++) {
                        for (int k = blockK; k < blockK + BSIZE; k++) {
                            C[i][j] += A[i][k] * B[k][j];
                        }
                    }
                }
            }
        }
    }
}

int main() {
    VVD A(MSIZE, std::vector<double>(MSIZE));
    VVD B(MSIZE, std::vector<double>(MSIZE));
    VVD C(MSIZE, std::vector<double>(MSIZE, 0));
    blockedMatrixMultiplication(A, B, C);

    return 0;
}
