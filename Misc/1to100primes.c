#include<stdio.h>
// #include<conio.h>
void primes(int m, int n) {
  int j, i, c;
  // clrscr();
  printf("\nPrime Numbers between 0 to 100:\n");
  for ( j=m; j<=n; j++) {
    c=0;
    for (i=2; i<=j/2; i++) if (j%i==0) {c++;break;};
    if (c==0) printf("%i, ",j);
  }
  // getch();
}