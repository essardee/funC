#include<stdio.h>
#include<conio.h>

// I tried to create a program which returns the inverse of the Entered Matrix. However, C cannot hold fractional expressions in variables. I tried changing the format into float but still there are many innacuracies. Creating this program in JavaScript would be way easier because we have an 'eval' function which can evaluate a string if it contains math expressions. Looking forward to bring an updated version of this program in JavaScript

void main() {
  int n,curRow,temp,pde;
  printf("\nEnter the number of rows/columns in the matrix: ");
  scanf("%d",&n);
  printf("\nThen, Number of elements in the matrix will be %i",n*n);
  float matrix[n*n],identitiy[n*n];
  printf("\n\nEnter the matrix:\n");

  for (int i=0;i<n*n;i++) {
    printf("Enter element %i: ",i+1);
    scanf("%f",&matrix[i]);
  }

  printf("\n");
  // Constructing an Identity Matrix of the same order
  for (int i=0;i<n*n;i++) {
    identitiy[i]=i%(n+1)==0?1:0;
  }

  // Printing the Constructed Identity Matrix
  for (int i=1;i<=n*n;i++) {
    printf("  %f",identitiy[i-1]);
    if (i%n==0) printf("\n");
  }

  printf("\n");

  // Printing the Entered Matrix
  for (int i=1;i<=n*n;i++) {
    printf("  %f",matrix[i-1]);
    if (i%n==0) printf("\n");
  }

  // for each row in the matrix
  for (curRow=1;curRow<=n;curRow++) {
    int stepdone=0;


    // Checking if Interchange is possible
    for (int i=curRow;i<=n;i++) {
      // This loop checks for a corresponding element to be 1


      if ( (matrix[(i-1)*n+curRow-1]==1)&&(i!=curRow) ) {
        stepdone=1;
        // Now, Interchange Current Row with i^th row in both martices
        for (int j=1;j<=n;j++) {
          temp=matrix[(curRow-1)*n+j-1];
          matrix[(curRow-1)*n+j-1]=matrix[(i-1)*n+j-1];
          matrix[(i-1)*n+j-1]=temp;

          temp=identitiy[(curRow-1)*n+j-1];
          identitiy[(curRow-1)*n+j-1]=identitiy[(i-1)*n+j-1];
          identitiy[(i-1)*n+j-1]=temp;
        }


        // After interchanging, apply operations to change the corresponding elements to 0
        for (int rAftIn=1; rAftIn<=n ;rAftIn++ ) {
          if (rAftIn==curRow) continue; // We don't want to apply any operations in the current row
          for (int i=1; i<=n; i++) {
            matrix[rAftIn*n+i-1]=matrix[rAftIn*n+i-1]-matrix[curRow*n+i-1]*matrix[rAftIn*n+curRow-1];
            identitiy[rAftIn*n+i-1]=identitiy[rAftIn*n+i-1]-identitiy[curRow*n+i-1]*identitiy[rAftIn*n+curRow-1];
          }
        }

      } else if (matrix[(i-1)*n+curRow-1]!=0) {
        // If we cannot interchange then we have to divide the whole row with principal diagonal element of that row
        for (int j=1; j<=n; j++) {
          pde=matrix[(j-1)*(n+1)];
          matrix[(curRow-1)*n+j-1]/=pde;
          identitiy[(curRow-1)*n+j-1]/=pde;
        }

        // After dividing, apply operations to change the corresponding elements to 0
        for (int rAftIn=1; rAftIn<=n ;rAftIn++ ) {
          if (rAftIn==curRow) continue; // We don't want to apply any opertions in the current row
          for (int i=1; i<=n; i++) {
            matrix[rAftIn*n+i-1]=matrix[rAftIn*n+i-1]-matrix[curRow*n+i-1]*matrix[rAftIn*n+curRow-1];
            identitiy[rAftIn*n+i-1]=identitiy[rAftIn*n+i-1]-identitiy[curRow*n+i-1]*identitiy[rAftIn*n+curRow-1];
          }
        }
      } else printf("\nWe can't solve for inverse of this matrix");
    }
  }

  printf("\nAfter Elementary Transformation:\n");

  for (int i=1;i<=n*n;i++) {
    printf("  %f",matrix[i-1]);
    if (i%n==0) printf("\n");
  }

  printf("\n");

  for (int i=1;i<=n*n;i++) {
    printf("  %f",identitiy[i-1]);
    if (i%n==0) printf("\n");
  }
}