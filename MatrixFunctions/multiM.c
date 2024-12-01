// Function to multiply two matrices

#include<stdio.h>
#define N 3

void multiM(int a[N][N], int b[N][N]) {
  int i,j,k,cM[N][N];
  printf("\nMatrix C = [AB]:\n");
  for (i=0;i<N;i++) {
    for (j=0;j<N;j++) {
      cM[i][j]=0;
      for (k=0;k<N;k++) cM[i][j]+=a[i][k]*b[k][i];
    }
  }
  printM(cM);
}