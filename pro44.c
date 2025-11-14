//WRITE A C PROGRAM TO FIND THE SUM OF FIRST N NATURAL NUMBERS WHICH ARE NOT DIVISIBLE BY 3 OR 5 USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
int n,sum=0;
printf("enter the number: ");
scanf("%d",&n);
 printf("number which are not divisible by 3 and 5\n");
  for(int i=1;i<=n;i++){
    if(i%3!=0 && i%5!=0){
        
        printf("%d\n",i);
        sum=sum+i;
        }
      }
      printf("%d is sum of %d natural number which are not divisible by 3 annd 5\n",sum,n);
      }
      
