#include<stdio.h>
#include<conio.h>
void main()
{
   int value,factorial=1;
   
   printf("Enter number : ");
   scanf("%d",&value);
   for(int i=1;i<=value;i++)
   {
       factorial *= i;
   }
   printf("\nFactorial of %d is %d",value,factorial);
   
   getch();
}