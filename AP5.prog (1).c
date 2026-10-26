/*To find whether a person is eligible to get loan or not*/
#include<stdio.h>
int main()
{
 int age,mi,cs;
 printf("Enter age of a person,monthly income and credit score:");
 scanf("%d%d%d",&age,&mi,&cs);
 if(age>=21 && age<=60)
  {
   if(mi>=25000)
    {
     if(cs>=700)
      printf("Loan approved");
     else
     printf("Loan rejected: credit score below 700");
    }
   else
    printf("Loan rejected: income below 25000");  
  }  
 else
  printf("Loan rejected: age not in  21 to 60");
 return 0; 
} 