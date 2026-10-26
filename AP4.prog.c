/*To find the total amount paid by customer by taking order amount and membership type as input*/
#include<stdio.h>
int main()
{
 int oa,mt,pa,d,de;// oa=order amount, mt=membership type,pa=payable amount 
 printf("\nEnter order amount:");
 scanf("%d",&oa);
 if(oa>=500)
  {
   printf("Enter membership type either 0 0r 1,0 for regular and 1 for premium:");
   scanf("%d",&mt);
   if(mt==1)
    {
     printf("The delivery is free");
     d=(oa*10)/100;
     de=0;
     pa=oa-d+de;
     printf("\nthe total payable amount that customer has to pay is %d",pa);
    }
   else
    {
     printf("The delivery is free");
     de=0;
     d=0;
     pa=oa-d+de;
     printf("\nThe total payable amount that customer has to pay is %d",pa);
   }
  }   
 else 
 {
   de=50;
   printf("delivery charge=%d",de);
   d=0;
   pa=oa-d+de;
   printf("\nThe total payable amount that customer has to pay is %d",pa);
 }   
return 0;  
}    
 