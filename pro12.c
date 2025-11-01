//WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS UPPERCASE OR LOWERCASE?
#include<stdio.h>
void main(){
char ch;
printf("enter the Alphabet: ");
scanf("%c",&ch);
if(ch>='a' && ch <='z')
  printf("%c it is lower case",ch);
else if(ch>='A' && ch <= 'Z')
  printf("%c it is upper case",ch);
else
  printf("invalid input");
}

