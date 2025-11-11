//WRITE A PROGRAM IN C TO FIND THE MAJORITY ELEMENT IN AN ARRAY USING LOOPS AND IF-ELSE STATEMENTS?
#include<stdio.h>
int main(){
int a[100],i,j,count,n;
printf("enter the size of elements: ");
scanf("%d",&n);
printf("enter the elements:\n");
for(i=0;i<n;i++){
  scanf("%d",&a[i]);
}
for(i=0;i<n;i++){
  count=1;
  for(j=1+i;j<n;j++){ 
  if(a[i]==a[j]){
  count++;
  }
}
if(count>n/2){
  printf("%d is the majority element\n",a[i]);
  return 0;
  }
}
   printf("No majority element\n");
   return 0;
}

