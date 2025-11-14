//WRITE A C PROGRAM TO FIND THE SUM OF ALL PRIME NUMBERS BETWEEN 1 AND 1000 USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
int i,j,flag=0;
printf("prime numbers from 1 to 1000\n);
for(i=2;i<=1000;i++){
  flag=1;
  for(j=2;j<i/2;j++){
    if(i%j==0){
      flag=0;
      break;
      }
    }
    if(flag==1)
        printf(" %d",i);
        }
       } 
    
