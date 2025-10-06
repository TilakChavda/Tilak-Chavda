#include<stdio.h>
#include<conio.h>
void main()
{
   int number;
   printf("\n enter any number \n press 1 for English \n press 2 for Hindi \n press 3 for Gujarati \n ");
   scanf("%d",&number);
   switch(number)
   {
       case 1:printf("\n you've selected English");
       break;
       case 2:printf("\n you've selected Hindi");
       break;
       case 3:printf("\n you've selected Gujarati");
       break;
       default:printf("\n The number entered is not valid");
       break;
       
   }
   
   
    getch();
}