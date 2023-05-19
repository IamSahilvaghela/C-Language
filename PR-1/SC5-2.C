#include<stdio.h>
#include<conio.h>

main()
{
   int bs,HRA=10,DA=5,TA=8,gs;
   clrscr();
   printf("Enter bs:");
   scanf("%d",&bs);
   HRA= bs*0.1;
   DA=bs*0.05;
   TA=bs*0.08 ;

   gs=(bs+HRA+DA+TA);
   printf("gross salary:%d",gs);
   getch();
}

