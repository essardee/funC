// Program to multiply two matrices of order N*N

#include<stdio.h>
#define N 3

void printM(int a[N][N]) {
  int i,j;
  for (i=0;i<N;i++) {
    for (j=0;j<N;j++) printf("%d  ",a[i][j]);
    printf("\n");
  }
}

void scanM(int a[N][N]) {
  int i,j;
  for (i=0;i<N;i++) for (j=0;j<N;j++) scanf("%d",&a[i][j]);
}

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

void main() {
  int aM[N][N], bM[N][N];
  printf("Enter the matrix A:\n");
  scanM(aM);
  printf("\n");
  printf("Enter the matrix B:\n");
  scanM(bM);
  printf("\nMatrix A:\n");
  printM(aM);
  printf("\nMatrix B:\n");
  printM(bM);
  multiM(aM,bM);
}