//WRITE A C PROGRAM TO FIND THE LCM OF TWO NUMBERS USING A FOR LOOP?
#include<stdio.h>
void main(){
int a,b,lcm,max;
printf("enter the number: ");
scanf("%d %d",&a,&b);
if(a<b){
 max=a;
}else
{ 
max=b;
}
for(lcm=max; ;lcm++){
if(lcm%a==0 && lcm%b==0)
  printf("%d of %d lcm is %d",a,b,lcm); 
  break;
  }
}


