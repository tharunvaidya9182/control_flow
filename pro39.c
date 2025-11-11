//WRITE A PROGRAM IN C TO FIND THE SUM OF ELEMENTS IN THE UPPER TRIANGULAR MATRIX USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
int a[10][10],sum=0;
int i,j,r,c;
printf("enter the rows: ");
scanf("%d",&r);
printf("enter the columns: ");
scanf("%d",&c);
printf("enter the matrix:\n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    scanf("%d",&a[i][j]);
  }
}
printf("matrix is:\n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    printf("%d ",a[i][j]);
  }
  printf("\n");
}
printf("sum of elements in upper triangle matrix:\n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    if(i<=j)
        sum=sum+a[i][j];
  }
}
 printf("%d\n",sum);
}
