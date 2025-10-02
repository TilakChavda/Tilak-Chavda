//7. Write a program to calculate sum of 5 subjects & find the percentage.
//Subject marks entered by user.

#include<stdio.h>
#include<conio.h>
void main()
{
   float a,b,c,d;
   float total;
   printf("\n Subject 1 = ");
   scanf("%f",&a);
   printf("\n Subject 2 = ");
   scanf("%f",&b);
   printf("\n Subject 3 = ");
   scanf("%f",&c);
   printf("\n Subject 4 = ");
   scanf("%f",&d);
   
   printf("\n Total marks obtained :%f",a+b+c+d);
   total = a+b+c+d;
   printf("\n percentage : %f",total/400*100);
   
    getch();
}