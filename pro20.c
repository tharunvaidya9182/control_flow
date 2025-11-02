//WRITE A C PROGRAM TO PRINT FIBONACCI SERIES UP TO N TERMS USING A FOR LOOP?
#include<stdio.h>
void main(){
int num,i,next=1,a=0,b=1,n;
printf("enter the number: ");
scanf("%d",&num);
for(i=0;i<num;i++){
next=a+b;
printf("%d  ",a);
a=b;
b=next;

}
}
