#include<stdio.h>
void main(){
int i,num,n;
long fact=1;
printf("enter the num: ");
scanf("%d",&num);
n=num;
for(i=num;i>=1;i--){
fact=fact*i;
}
printf("%ld is the fact of %d\n",fact,n);

}
