//WRITE A PROGRAM IN C TO ADD TWO MATRICES USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
  int a[10][10],b[10][10],sum[10][10];
  int r,c,i,j;
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
        sum[i][j]=a[i][j]+b[i][j];
        }
      }
      printf("sum of matrices:\n");
        for(i=0;i<r;i++){
          for(j=0;j<c;j++){
            printf("%d ",sum[i][j]);
            }
            printf("\n");
          }
        } 
  

   


