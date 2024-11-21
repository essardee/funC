#include<stdio.h>

int lcm(int a, int b) {
  int counter=2;
  int greater=(a>b)?a:b;
  // counting the common factors
  for (int i = greater; i <= a*b; i+=greater) {
    if (i%a==0 && i%b==0) {
      printf("\n%i is the LCM of %i and %i.",i,a,b);
      break;
    }
  }
}