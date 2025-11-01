//WRITE A C PROGRAM TO FIND NUMBER OF DAYS IN MONTH?
#include<stdio.h>
void main(){
int month;
printf("enter the month: ");
scanf("%d",&month);
switch(month)
{
  case 1:case 3 : case 5: case 7: case 8: case 10: case 12: 
    printf("it have 31 days");
    break;
  case 4: case 6: case 9: case 11:
    printf("it have 30 days");
    break;
  case 2:
      printf("it have 28 or 29 days");
      break;
  default: printf("invalid input");
  }
  }
