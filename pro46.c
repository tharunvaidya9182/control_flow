//WRITE A C PROGRAM TO FIND THE SUM OF ALL ODD NUMBERS BETWEEN TWO GIVEN NUMBERS USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
int first_no,end_no,sum=0,i;
printf("enter the first_no: ");
scanf("%d",&first_no);
printf("enter the end_no: ");
scanf("%d",&end_no);
printf("odd number between %d and %d\n",first_no,end_no);
for (i=first_no;i<=end_no;i++)
{
  if(i%2!=0)
    {
       printf("%d\n",i);
      sum=sum+i;
       }
     }
     printf("the sum of odd number between %d and %d is %d\n",first_no,end_no,sum);
  }
    
