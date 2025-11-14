//WRITE A C PROGRAM TO CHECK WHETHER A GIVEN NUMBER IS A PALINDROME IN BOTH DECIMAL AND BINARY REPRESENTATIONS USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
void main(){
long int num,rem,rev=0,temp;
long int binary=0,mul=1,revbin=0,tempbin;
printf("enter the decimal number: ");
scanf("%ld",&num);
temp=num;
while(temp>0){
  rem=temp%10;
  rev=rev*10+rem;
  temp=temp/10;
 }
  if(num==rev){
    printf("%ld is the palindrome\n",num);
    }
    else
    {
    printf("%ld is not the palindrome\n",num);
  }
  temp=num;
while(temp>0){
  rem=temp%2;
  binary=binary+rem*mul;
  mul=mul*10;
  temp=temp/2;
}
  printf("%ld is the binary number of %ld\n",binary,num);
tempbin=binary;
while(tempbin!=0){
  rem=tempbin%10;
  revbin=revbin*10+rem;
  tempbin=tempbin/10;
  }
  if(binary==revbin)
    printf("it  is the palindrome\n");
  else
    printf("it is not palindrome\n");
  
 }
  


  
    
