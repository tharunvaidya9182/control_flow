// PROGRAM TO CHECK WEATHER MAXIMUM OR MINIMUM OF TWO NUMBER
#include<stdio.h>
void main(){
int a,b;
printf("enter the first value: ");
scanf("%d",&a);
printf("enter the second value: ");
scanf("%d",&b);
if(a>b)
  printf("the max value is %d and the min value is %d\n",a,b);
else if(b>a)
  printf("the max value is %d and the min value is %d\n",b,a);
else 
  printf("both are equal");
}

