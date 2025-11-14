//WRITE A C PROGRAM TO CALCULATE THE POWER OF A NUMBER USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
long int base,exponent,i,power=1;
printf("enter the number: ");
scanf("%ld",&base);
printf("enter the number: ");
scanf("%ld",&exponent);
for(i=1;i<=exponent;i++){
  power=power*base;
  }
printf("%ld is the power of a given number\n",power);
}
