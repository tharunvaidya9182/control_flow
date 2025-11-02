//WRITE A C PROGRAM TO FIND THE SUM OF ELEMENTS IN AN ARRAY USING A WHILE LOOP?
#include<stdio.h>
void main(){
int n,sum=0;
printf("enter the size of array: ");
scanf("%d",&n);
int i=0;
int arr[n];
printf("the size of array %d enter the numbers:\n",n);
while(i<n){
scanf("%d", &arr[i]);
i++;
}

i=0;
while(i<n){
 sum=sum+arr[i];
    i++;
    }
    printf("%d is the sum\n",sum);
    }
