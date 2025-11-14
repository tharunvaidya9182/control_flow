//WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS USING NESTED LOOPS?
#include<stdio.h>
void main(){
  int i,j,n;
  printf("enter the number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      printf("* ");
      }
      printf("\n");
    }
  }
