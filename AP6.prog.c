/*To write a c program that validates login or not*/
#include<stdio.h>
int main()
{
 int ui,pd;
 printf("Enter User ID :");
 scanf("%d",&ui);
 if(ui==101)
 {
  printf("Enter password:");
  scanf("%d",&pd);
  if(pd==4321)
  printf("Login successful");
  else
  printf("Incorrect password");
 }
 else
 printf("User not found"); 
return 0; 
} 