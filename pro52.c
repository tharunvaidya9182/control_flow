//WRITE A C PROGRAM TO PRINT THE PATTERN OF STARS IN A HOLLOW SQUARE SHAPE USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
int i,j,number;
printf("enter the number: ");
scanf("%d",&number);
for(i=1;i<=number;i++){
  for(j=1;j<=number;j++){
      if(i==1||i==number||j==1||j==number){
        printf("*");
        }else{
        printf(" ");
        }
        }
       printf("\n");
       }
      }
        
