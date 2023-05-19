#include<stdio.h>
#include<conio.h>

main()
{
   int c;
   clrscr();
   printf("Enter celsiu C:");
   scanf("%d",&c);
   printf("Fehrenheit F: %d ",(c*9/5)+32);
   getch();
}

