//WRITE A C PROGRAM TO PRINT THE MULTIPLICATION TABLE OF A GIVEN NUMBER USING A FOR LOOP?
#include<stdio.h>
void main(){
int number,i,result;
printf("enter the number: ");
scanf("%d",&number);
  for(i=1;i<=10;i++)
  {
    result=i*number;
    printf("%d X %d = %d\n",number,i,result);
  }
 }   
  
