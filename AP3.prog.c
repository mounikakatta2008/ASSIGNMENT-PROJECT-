/*To find the voting eligibility of person based on his age*/
#include<stdio.h>
int main()
{
 int n;
 printf("\nEnter age of a person:");
 scanf("%d",&n);
 if(n>=18)
 printf("Eligible to vote");
 else
 printf("Not eligible to vote");
 return 0;
} 