//2. Write a program to make addition, Subtraction, Multiplication and Division of
//Two Numbers.[User input]

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1;
    int num2;
    printf("\n enter your first number :");
    scanf("%d",&num1);
    printf("\n enter your second number :");
    scanf("%d",&num2);
    
    printf("\n addition of the number is %d",num1+num2);
    printf("\n subtraction of both the numbers is %d",num1-num2);
    printf("\n multiplication of both the number is %d",num1*num2);
    printf("\n division of both the number %d",num1/num2);
    
    getch();
}