#include<stdio.h>
#include<conio.h>
void main()
{
   char a;
   printf("enter alphabet : ");
   scanf("%c",&a);
   if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
   {
       printf("its a vowel");
   }
   else
   {
       printf("its a consonant");
   }
    
    getch();
}