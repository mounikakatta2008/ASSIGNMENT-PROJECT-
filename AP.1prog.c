/*To find either given is positive or negative or zero*/
#include<stdio.h>
int main()
{
 int n;
 printf("Enter any value for n:");
 scanf("%d",&n);
 if(n>0)
 printf("The given number is positive");
 else 
 if(n<0)
 printf("The given number is negative");
 else
 printf("The given number is zero");
 return 0;
} 