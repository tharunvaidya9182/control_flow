//WRITE A C PROGRAM TO READ THE VALUE OF AN INTEGER M AND DISPLAY THE VALUE OF N IS 1 WHEN M IS LARGER THAN 0, 0 WHEN M IS 0 AND -1 WHEN M IS LESS THAN 0.
#include<stdio.h>
void main(){
int m,n;
printf("enter the value of m: ");
scanf("%d",&m);
if(m>0)
  n=1;
else if(m==0)
  n=0;
else
  n=-1;
printf("the value of n=%d\n",n);
}
