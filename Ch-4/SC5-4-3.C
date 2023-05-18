#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	clrscr();

	printf("Enter a:");
	scanf("%d",&a);
	printf("Enter b:");
	scanf("%d",&b);

	c= (a*a)+(b*b)+(2*a*b);

	printf("(a+b)^2 = %d " ,c);

	getch();

}