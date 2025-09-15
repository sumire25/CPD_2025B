#include <iostream>
#define MSIZE 1000
#define BSIZE 100

int main(){
  double A[MSIZE][MSIZE], B[MSIZE][MSIZE], C[MSIZE][MSIZE] = {0};
  for (int blockI = 0; blockI < MSIZE; blockI += BSIZE)
    for (int blockJ = 0; blockJ < MSIZE; blockJ += BSIZE)
      for (int blockK = 0; blockK < MSIZE; blockK += BSIZE)
        for (int i = blockI; i < blockI + BSIZE; i++)
          for (int j = blockJ; j < blockJ + BSIZE; j++)
            for (int k = blockK; k < blockK + BSIZE; k++)
              C[i][j] += A[i][k] * B[k][j];

  return 0;
}