//WRITE A C PROGRAM TO FIND THE LARGEST OF THREE NUMBERS?
#include<stdio.h>
void main(){
int a,b,c;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
if(a>b&&a>c)
  printf("%d is greater than %d %d",a,b,c);
else if(b>c&&b>a)
  printf("%d is greater than %d %d",b,a,c);
else
  printf("%d is greater than %d %d",c,a,b);
}


