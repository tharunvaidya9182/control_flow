#include<stdio.h>
#include<math.h>
void main(){
  int flag=1,num;
  int i=2;
  printf("enter the number: ");
  scanf("%d",&num);
  if(num<=1){
  printf("%d is not prime number",num);
  return;
  }
  while(i<=sqrt(num))
  {
    if(num%i==0)
    {
      printf("%d is not prime number",num);
      flag=0;
      break;
     } 
     i++;
  }
  if(flag==1){
  printf("%d is the prime number",num);
   }
  }
