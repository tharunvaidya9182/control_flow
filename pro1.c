//program check weather given number is even or odd
#include<stdio.h>
void main(){
long long int num;
printf("enter the number: ");
scanf("%lld",&num);
if(num%2==0){
printf("%lld it is even\n",num);
}else{
printf("%lld it is odd\n",num);
}
}
