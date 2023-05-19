#include<stdio.h>
#include<conio.h>
main()
{
   int a,b,c;;
   clrscr();
   printf("enter angle a :");
   scanf("%d",&a);
   printf("enter angle b :");
   scanf("%d",&b);

   c=180-(a+b);
   printf("last angle: %d",c);
   getch();
}
