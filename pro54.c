//WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A MIRRORED RIGHT TRIANGLE SHAPE USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
  int i,j,n;
  printf("enter the number: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<i;j++){
      printf(" ");
      }
    for(j=i;j<=n;j++){
      printf("*");
     }
       printf("\n");
    }
}
