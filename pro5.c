//PROGRAM TO READ THE AGE OF A CANDIDATE AND DETERMINE WHEATHER HE IS NOT ELIGIBLE TO CAST HIS\HER OWN VOTE?
#include<stdio.h>
void main(){
int age;
printf("the voter should be citizen of india\n");
printf("enter the age:");
scanf("%d",&age);
if(age>=18){
printf("he/she eligible to caste the vote\n");
}
else
{
printf("he/she not eligible to caste the vote");
}
}
