#include<stdio.h>
#include<conio.h>
void main()
{
   int Guess;
   printf("Enter Lucky Number between 1 to 100");
   for(int i=1;i<=5;i++)
   {
       printf("\nGuess %d : ",i);
       scanf("%d",&Guess);
       
       if(Guess==67)
       {
           printf("Congratulations you've guessed the Lucky number!");
           break;
       }
       else if(i<5)
       {
           if(Guess<=67)
           {
               printf("try a higher number");
           }
           else
           {
               printf("try a lower number");
           }
       }
   
       else
       {
           printf("Wrong Guess");
           printf("\nGAME OVER");
       }
   }
   
   getch();
}