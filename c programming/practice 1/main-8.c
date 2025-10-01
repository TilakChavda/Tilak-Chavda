#include<stdio.h>
#include<conio.h>
void main()
{
    int p = 100000, r = 5, n = 5;
    int interest = p*r*n/100;
    printf("\n total payable interest is %d",interest);
    int total = interest+p;
    printf("\n total amount payable at the end with interest is %d",total);
    
    getch();
}