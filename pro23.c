//WRITE A C PROGRAM TO FIND THE SMALLEST ELEMENT IN AN ARRAY USING A WHILE LOOP?
#include<stdio.h>
void main(){
int i=0,n,arr[100],small;
printf("enter the size of array: ");
scanf("%d",&n);
printf("enter the numbers: ");
while(i<n){
scanf("%d",&arr[i]);
i++;
}
small=arr[0];
i=1;
while(i<n){
  if(arr[i]<small){
  small=arr[i];
  }
    i++;
    }
    printf("%d",small);
    }
    
