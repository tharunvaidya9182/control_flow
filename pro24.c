//WRITE A C PROGRAM TO PRINT ALL THE ELEMENTS OF AN ARRAY USING A FOR LOOP?
#include<stdio.h>
void main(){
int n,i;
printf("enter the size of the array:");
scanf("%d",&n);
int arr[n];
printf("the size of array is %d enter the numbers in array\n",n);
for(i=0;i<n;i++){
scanf("%d",&arr[i]);
}
printf("the numbers in arrays are: ");
for(i=0;i<n;i++){
printf("%d ",arr[i]);
}
}

