//WRITE A C PROGRAM TO FIND THE FACTORIAL OF A NUMBER USING A WHILE LOOP?
#include<stdio.h>
void main(){
int num,result=1,a,i=1;
printf("enter the number: ");
scanf("%d",&num);
a=num;
while(i<=num)
 {
  result=result*i;
  i++;
  }
  printf("%d is the factorial of a %d",result,a);
}
