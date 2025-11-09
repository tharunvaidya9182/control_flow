//WRITE A PROGRAM IN C TO IMPLEMENT A SIMPLE CALCULATOR USING SWITCH-CASE STATEMENTS?
#include<stdio.h>
void main(){
int number1,number2;
char op;
printf("enter the number: ");
scanf("%d",&number1);
printf("enter the op(+,-,*,/,%%): ");
scanf(" %c",&op);
printf("enter the number: ");
scanf("%d",&number2);
switch(op)
{
  case '+':
            printf("%d + %d = %d\n",number1,number2,number1+number2);
            break;
  case '-':
            printf("%d - %d = %d\n",number1,number2,number1-number2);
            break;
  case '*':
            printf("%d * %d = %d\n",number1,number2,number1*number2);
            break;
  case '/':
            if(number2==0){
              printf("division by Zero is not possible\n");
              }else{
            printf("%d / %d = %d\n",number1,number2,number1/number2);
            }
            break;          
  case '%':
            if(number2==0){
              printf("modulus by Zero is not possible\n");
              }else{
            printf("%d %% %d = %d",number1,number2,number1%number2);
            }
            break;          
   default: printf("invalid input\n");
   }
  } 
   
