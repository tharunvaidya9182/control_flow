//WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS AN ALPHABET OR NOT?
#include<stdio.h>
void main(){
char ch;
printf("enter the char:");
scanf("%c",&ch);
if(ch >'a' && ch < 'z' || ch > 'A' && ch < 'z')
  printf("%c is Alphabet\n",ch);
else
  printf("%c is  constant\n",ch);
}

