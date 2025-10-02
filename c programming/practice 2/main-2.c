#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10;
    int b = 5;
    
    a+=b;
    printf("\n %d",a);//15
    
    a-=b;
    printf("\n %d",a);//10
    
    a/=b;
    printf("\n %d",a);//2
    
    getch();
}