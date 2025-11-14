//WRITE A C PROGRAM TO FIND THE ASCII VALUE OF A CHARACTER USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
char ch;
int i;
printf("enter the character: ");
scanf("%c",&ch);
for(i=0;i<=127;i++){
  if(i==ch){
  printf("ASCII value of %c is %d",ch,i);
  break;
    }
  }
 } 

    


