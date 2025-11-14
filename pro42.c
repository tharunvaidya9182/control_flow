//WRITE A C PROGRAM TO SEARCH FOR AN ELEMENT IN AN ARRAY USING LINEAR SEARCH AND A FOR LOOP?
#include<stdio.h>
void main(){
int search,n,a[100],flag=0;
printf("enter the number of elements: ");
scanf("%d",&n);
printf("enter the number:\n");
for(int i=0;i<n;i++){
  scanf("%d",&a[i]);
}
printf("enter the element to search:\n");
scanf("%d",&search);
for(int i=0;i<n;i++){
   if(a[i]==search){
      printf("%d element is found at %d\n",search,i+1);
      flag=1;
      break;
    }
   } 
  if(flag==0){
      printf("%d element is not found\n",search);
      }
}

