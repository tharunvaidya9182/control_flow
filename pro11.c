//WRITE A C PROGRAM TO ENTER WEEK NUMBER AND PRINT DAY OF WEEK?
#include<stdio.h>
void main(){
int week;
printf("enter the week: ");
scanf("%d",&week);
switch(week)
{
  case 1:printf("it is monday\n");
        break;
  case 2:printf("it is tuesday\n");
        break;
  case 3:printf("it is wednesday\n");
        break;
  case 4:printf("it is thursday\n");
        break;
  case 5:printf("it is friday\n");
        break;      
  case 6:printf("it is saturday\n");
        break;
  case 7:printf("it is sunday\n");
        break;
  default:
        printf("invalid input\n");
  }
}
              
              
        
  
