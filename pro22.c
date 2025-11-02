//WRITE A C PROGRAM TO FIND THE LARGEST ELEMENT IN AN ARRAY USING A FOR LOOP?
#include<stdio.h>
void main(){
int n,i,arr[n],num,j;
printf("enter the size of array: ");
scanf("%d",&n);
 printf("enter the numbers\n");
  for(i=0;i<n;i++){
   scanf("%d",&arr[i]);
  }
  j=arr[0];
    for(i=1;i<n;i++){
      if(arr[i]>j)
        j=arr[i];
        }
        printf("%d is large\n",j);
    }
  
