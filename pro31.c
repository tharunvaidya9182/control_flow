//WRITE A PROGRAM IN C TO PRINT THE ARMSTRONG NUMBERS BETWEEN 1 AND 1000 USING A FOR LOOP?
#include<stdio.h>
void main(){
int num,temp,count,i,sum,digit,mul;
for(num=1;num<=1000;num++){
  temp=num;
  count=0;
  while(temp>0){
    count++;
    temp=temp/10;
  }
  temp=num;
  sum=0;
  while(temp>0){
    digit=temp%10;
    mul=1;
    for(i=1;i<=count;i++){
        mul=mul*digit;
      }
       sum=sum+mul;
       temp=temp/10;
    }
      if(sum==num)
      {
        printf("%d ",num);
        }
      }
    }
      
        
