//WRITE A C PROGRAM TO FIND THE GCD OF TWO NUMBERS USING A WHILE LOOP?
#include<stdio.h>
void main(){
int a,x,b,y;
printf("enter the numbers: ");
scanf("%d",&x);
printf("enter the numbers: ");
scanf("%d",&y);
a=x; 
b=y;
while(a!=b){
  if(a>b){
    a=a-b;
 } else{
    b=b-a;
    }
 }
 printf("gcd of %d and %d is %d\n",x,y,a);
}
   
