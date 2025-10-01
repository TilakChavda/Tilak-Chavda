#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 10;
    int b = 5;
    
    int add = a+b; 
    int multi = a*b;
    int subt = a-b;
    int divi = a/b;
    int remain = a%b; 
    
    printf("\n sum of a and b = %d",add);
    printf("\n multiplication of a and b = %d",multi);
    printf("\n subtraction of a and b = %d",subt);
    printf("\n division of a and b = %d",divi);
    printf("\n remainder of a and b = %d",remain);
   
    getch();
}