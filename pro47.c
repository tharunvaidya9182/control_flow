//WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS A PERFECT SQUARE OR NOT USING LOOPS AND IF-ELSE STATEMENTS.
#include<stdio.h>
void main(){
int n,i,result,flag=0;
printf("enter the number: ");
scanf("%d",&n);
for(i=0;i<n;i++){
  result=i*i;
  if(result==n){
    flag=1;
    break;
    }
  }
if(flag==1)
  printf("%d is the perfect square number\n",n);
else
  printf("%d is not the perfect square number\n",n);
}
