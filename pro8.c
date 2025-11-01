//WRITE A C PROGRAM TO CHECK WHETHER A CHARACTER IS A VOWEL OR CONSONANT?
#include<stdio.h>
void main(){
char ch;
printf("enter the char: ");
scanf("%c",&ch);
if(ch=='a' || ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A' ||      ch=='E'||ch=='I'||ch=='O'||ch=='U'){
printf("it is vowel\n");
}else if((ch>='a'&&ch<'z')||(ch>='A'&&ch<'Z')){
printf("it is constant\n");
}else{
printf("it is not constant\n");
}
}
