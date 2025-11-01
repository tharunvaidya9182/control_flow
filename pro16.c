//WRITE A C PROGRAM TO CALCULATE THE SUM OF NUMBERS FROM 1 TO 100 USING A WHILE LOOP?
#include<stdio.h>
void main(){
int i=0,sum=0,num=100;
//printf("enter the number: ");
//scanf("%d",&num);
while(i<=num){
sum=sum+i;
i++;
//printf("%d=%d after updated\n",i,sum);
}
printf("%d is the sum of (1 to 100)\n",sum);
}

