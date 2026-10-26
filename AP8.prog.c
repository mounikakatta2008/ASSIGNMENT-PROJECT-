/*To find the BMI of a person by taking weight and height as inputs*/
#include<stdio.h>
int main()
{
 float wt,ht,bmi;
 printf(" Enter weight(in kgs) and height(in mts) of a person:");
 scanf("%f%f",&wt,&ht);
 bmi=wt/(ht*ht);
 if(bmi<18.5)
 printf("   BMI=%f\n   Category is Underweight",bmi);
 else if(bmi>=18.5 && bmi<25)
 printf("   BMI=%f\n   Category is Normal",bmi);
 else if(bmi>=25 && bmi<30)
 printf("   BMI=%f\n   Category is overweight",bmi);
 else
 printf("   BMI=%f\n   Category is Obese",bmi);
 return 0;
}           