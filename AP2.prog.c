/*To find the area and perimeter of rectangle*/
#include<stdio.h>
int main()
{
 float l,b,a,p;
 printf("\nEnter length and breadth values:");
 scanf("%f%f",&l,&b);
 a=l*b;
 p=2*(l+b);
 printf("The area of rectangle=%f",a);
 printf("\nThe perimeter of rectangle=%f",p);
 return 0;
} 