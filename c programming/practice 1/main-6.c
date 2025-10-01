#include<stdio.h>
#include<conio.h>
 void main ()
 {
     int science = 50;
     int maths = 60;
     int english = 50;
     int history = 60;
     int civics = 50;
     int geography = 60;
     
     int total = science+maths+english+history+civics+geography;
     printf("\n total of all subjects = %d",total);
     
     int average = total/6;
     printf("\n Average marks you got = %d",average);
     
     getch();
 }