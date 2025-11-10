//WRITE A PROGRAM IN C TO MULTIPLY TWO MATRICES USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
int r,c,i,j;
int a[10][10],b[10][10],mul[10][10];
printf("enter the rows: ");
scanf("%d",&r);
printf("enter the columns: ");
scanf("%d",&c);
printf("enter the first matrices:\n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    scanf("%d",&a[i][j]);
    }
  }
printf("enter the second matrices:\n");
for(i=0;i<r;i++){
  for(j=0;j<c;j++){
    scanf("%d",&b[i][j]);
    }
  }
 for(i=0;i<r;i++){
  for(j=0;j<c;j++){
   mul[i][j]=a[i][j]*b[i][j];
    }
  }
 printf("multipy of two matrices:\n");
 for(i=0;i<r;i++){
  for(j=0;j<c;j++){
  printf("%d ",mul[i][j]);  
    }
    printf("\n");
  } 
  }
  
