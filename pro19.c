#include<stdio.h>
void main(){
int i=0,num,rem,sum=0,a;
printf("enter the num: ");
scanf("%d",&num);
a=num;
while(num>0)
{
rem=num%10;
sum=sum+rem;
num=num/10;
}
printf("%d is the sum digits of %d\n",sum,a);
}
