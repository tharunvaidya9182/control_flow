//WRITE A C PROGRAM TO FIND MAXIMUM BETWEEN TWO NUMBERS USING SWITCH CASE?
#include<stdio.h>
void main(){
int number1,number2,result;
printf("enter the number1 value: ");
scanf("%d",&number1);
printf("enter the number2 value: ");
scanf("%d",&number2);
result=number1>number2;
switch(result){
case 1:
      printf("%d is the max value than %d ",number1,number2);
        break;
 case 0:
      printf("%d is max value than %d",number2,number1);
        break;
default:
     printf("invalid input or both are equal");
   

}
}
