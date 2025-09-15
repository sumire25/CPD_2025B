#include <iostream>
#define MSIZE 1000

int main(){
  double A[MSIZE][MSIZE], B[MSIZE][MSIZE], C[MSIZE][MSIZE] = {0};
  for (int i = 0; i < MSIZE; i++)
    for (int j = 0; j < MSIZE; j++)
      for (int k = 0; k < MSIZE; k++)
        C[i][j] += A[i][k] * B[k][j];

  return 0;
}