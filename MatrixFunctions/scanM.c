// Function to read a matrix

#include<stdio.h>
#define N 3

void scanM(int a[N][N]) {
  int i,j;
  for (i=0;i<N;i++) for (j=0;j<N;j++) scanf("%d",&a[i][j]);
}