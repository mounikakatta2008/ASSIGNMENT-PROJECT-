/*To find the grade of a student based on subject marks*/
#include<stdio.h>
int main()
{
 int sm;//sm=subject marks 
 printf("\nEnter subject marks:");
 scanf("%d",&sm);
 if(sm>=0 && sm<=100)
  {
   if(sm>=90)
   printf("Grade=%c",'O');
   else if(sm>=80)
   printf("Grade=%c%c",'A','+');
   else if(sm>=70)
   printf("Grade=%c",'A');
   else if(sm>=60)
   printf("Grade=%c",'B');
   else if(sm>=50)
   printf("Grade=%c",'C');
   else
   printf("Fail");
  }
 else
  printf("Invalid mark"); 
 return 0; 
}  