/*To find whether the given is character vowel or not*/
#include<stdio.h>
int main()
{
 char c;
 printf("\nEnter any character:");
 scanf("%c",&c);
 if(c=='a'|| c=='A' || c=='e' || c=='E' || c=='i' || c=='I' || c=='o' || c=='O' || c=='u' || c=='U')
 printf("The given character is a vowel");
 else
 printf("The given character is not a vowel");
 return 0;
}
