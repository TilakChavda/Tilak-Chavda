//9. Write a Program to check the given year is leap year or not.

#include<stdio.h>
#include<conio.h>
void main()
{
   int year;
   printf("Enter year here ");
   scanf("%d",&year);
   
   if(year%400==0)
   {
       printf("Leap Year");
   }
   else if(year%100==0)
   {
       printf("NOT a Leap Year");
   }
   else if(year%4==0)
   {
       printf("Leap Year");
   }
   else
   {
       printf("NOT a Leap Year");
   }
    getch();
}