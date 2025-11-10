//WRITE A C PROGRAM TO PRINT ALL THE ODD NUMBERS BETWEEN 1 TO 50 USING A FOR LOOP?
#include<stdio.h>
void main(){
int i;
for(i=1;i<=50;i++){
  if(i%2!=0){
    printf("%d is the odd number\n",i);
    }else{
    printf("%d is the even number\n",i);
    }
  }
}
