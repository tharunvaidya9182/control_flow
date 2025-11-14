//WRITE A C PROGRAM TO FIND THE SUM OF ALL EVEN NUMBERS BETWEEN TWO GIVEN NUMBERS USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
int number1,number2;
int sum=0,i;
printf("enter the number1: ");
scanf("%d",&number1);
printf("enter the number2: ");
scanf("%d",&number2);
printf("even number between %d and %d\n",number1,number2);
for(i=number1;i<=number2;i++){
  if(i%2==0){
    printf("%d\n",i);
    sum=sum+i;
    }
  }
    printf("the sum of even number between %d and %d is %d\n",number1,number2,sum);
    
 } 
  
    
