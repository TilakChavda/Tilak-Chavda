//6. Write a program to find the simple Interest.

#include<stdio.h>
#include<conio.h>
void main()
{
    float p,r,n;
    printf("Enter principle amount ");
    scanf("%f",&p);
    
    printf("Enter rate of interest ");
    scanf("%f",&r);
    
    printf("Enter number of years ");
    scanf("%f",&n);
    
    printf("Simple interest = %f",p*r*n/100);
    
    getch();
}