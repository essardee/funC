#include<stdio.h>
#include<conio.h>

void main() {
  int n,markToggle=1,side=0;
  char marks[9] = "         ";
  printf("\nWelcome to Tic Tac Toe");
  printf("\n\n    |   |        1 | 2 | 3\n ---|---|---    ---|---|---\n    |   |        4 | 5 | 6\n ---|---|---    ---|---|---\n    |   |        7 | 8 | 9");
  printf("\nWhere would you like to make the first mark(X)?");
  scanf("%d",&n);
  marks[n-1]='X';
  printf("\n\n  %c | %c | %c      1 | 2 | 3\n ---|---|---    ---|---|---\n  %c | %c | %c      4 | 5 | 6\n ---|---|---    ---|---|---\n  %c | %c | %c      7 | 8 | 9",marks[0],marks[1],marks[2],marks[3],marks[4],marks[5],marks[6],marks[7],marks[8]);
  markToggle++;

  while (markToggle<10) {
    printf("\n\nMake the next move: ");
    scanf("%d",&n);
    marks[n-1]=(marks[n-1]==' ')?((markToggle%2==0)?'O':'X'):marks[n-1];
    printf("\n\n  %c | %c | %c      1 | 2 | 3\n ---|---|---    ---|---|---\n  %c | %c | %c      4 | 5 | 6\n ---|---|---    ---|---|---\n  %c | %c | %c      7 | 8 | 9",marks[0],marks[1],marks[2],marks[3],marks[4],marks[5],marks[6],marks[7],marks[8]);
    markToggle++;
    if(marks[0]==marks[1]&&marks[1]==marks[2]&&marks[2]!=' ') {
      printf("\n\n%c Wins",marks[0]);break;
    } else if (marks[3]==marks[4]&&marks[4]==marks[5]&&marks[4]!=' ') {
      printf("\n\n%c Wins",marks[3]);break;
    } else if (marks[6]==marks[7]&&marks[7]==marks[8]&&marks[8]!=' ') {
      printf("\n\n%c Wins",marks[6]);break;
    } else if(marks[0]==marks[4]&&marks[4]==marks[8]&&marks[8]!=' ') {
      printf("\n\n%c Wins",marks[0]);break;
    } else if(marks[2]==marks[4]&&marks[4]==marks[6]&&marks[4]!=' ') {
      printf("\n\n%c Wins",marks[2]);break;
    } else if(marks[1]==marks[4]&&marks[4]==marks[7]&&marks[4]!=' ') {
      printf("\n\n%c Wins",marks[1]);break;
    } else if(marks[0]==marks[3]&&marks[3]==marks[6]&&marks[0]!=' ') {
      printf("\n\n%c Wins",marks[2]);break;
    } else if(marks[2]==marks[5]&&marks[5]==marks[8]&&marks[2]!=' ') {
      printf("\n\n%c Wins",marks[2]);break;
    }
  }
}