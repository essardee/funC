#include<stdio.h>

void palin(int given) {
  int a = given;
  int c = 0;
  while (a!=0) c=c*10+a%10, a=a/10;
  printf("\nInverted Value: %i\n",c);
  if (c==given) printf("\nIt's a Palindrome Number"); 
  else printf("\nNot a Palindrome Number");
}