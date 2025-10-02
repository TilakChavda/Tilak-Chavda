//5. Write a program to find the Area of Triangle=0.5*a*b

#include<stdio.h>
#include<conio.h>
void main()
{
    float a;
    float b;
    printf("Enter height ");
    scanf("%f",&a);
    printf("\nEnter base ");
    scanf("%f",&b);
    
    printf("\n Area of Triangle %f",0.5*a*b);
    getch();
}