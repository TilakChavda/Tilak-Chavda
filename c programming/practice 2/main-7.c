#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("enter the number here:");
    scanf("%d",&num);
    if(num>=0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    getch();
}