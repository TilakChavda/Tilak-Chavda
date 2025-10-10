#include<stdio.h>
#include<conio.h>
void main()
{
    int num,i,ans;
    printf("enter the number : ");
    scanf("%d",&num);
    
    for(i=1;i<=10;i++)
    {
        ans = i * num;
        printf("\n%d * %d = %d",num,i,ans);
    }
    
    
    
    getch();
}