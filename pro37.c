//WRITE A PROGRAM IN C TO CHECK WHETHER A GIVEN NUMBER IS A PALINDROME OR NOT USING WHILE LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
int number,sum=0,rem,temp;
printf("enter the number: ");

scanf("%d",&number);
temp=number;
  while(number>0){
  rem=number%10;
  sum=sum*10+rem;
  number=number/10;
  }
  if(temp==sum){
  printf("%d is the palindrome",temp);
  }
  else
  {
  printf("%d is not palindrome",temp);
  }
}

