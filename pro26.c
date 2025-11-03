//WRITE A C PROGRAM TO FIND THE POWER OF A NUMBER USING A FOR LOOP?
#include<stdio.h>
void main(){
int i,base,exponent;
long long power=1;
printf("enter the base number: ");
scanf("%d",&base);
printf("enter the exponent number: ");
scanf("%d",&exponent);
for(i=1;i<=exponent;i++){
  power=power*base;
  }
  printf("%lld is the power of a %d\n",power,base);
}
  
