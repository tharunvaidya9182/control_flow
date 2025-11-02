//WRITE A C PROGRAM TO REVERSE A GIVEN NUMBER USING A WHILE LOOP?
#include<stdio.h>
void main(){
int num,rev=0,rem,n;
printf("enter the num:");
scanf("%d",&num);
n=num;
while(num>0){
rem=num%10;
rev=(rev*10)+rem;
num=num/10;
}
printf("%d is rev of %d",rev,n);
}
