//8. Write a Program to check the given number is Positive, Negative.

#include<stdio.h>
#include<conio.h>
void main()
{
    int a;
    printf("Enter the number :");
    scanf("%d",&a);
    if(a>=0)
    {
        printf("Number is Positive");
    }
    else
    {
        printf("Number is negative");
    }
  
    getch();
}