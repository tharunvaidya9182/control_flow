//WRITE A C PROGRAM TO PRINT EVEN NUMBERS BETWEEN 1 TO 20 USING A FOR LOOP?
#include<stdio.h>
void main(){
int i,num;
printf("enter the value: ");
scanf("%d",&num);
for(i=1;i<=num;i++){
  if(i%2==0)
     printf("%d is even\n",i);
  else
     printf("%d is odd\n",i);
    }
 }
