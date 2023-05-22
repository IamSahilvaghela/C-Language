#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter number :");
	scanf("%d",&a);
	if(a>0)
	{
	printf("This number is Positive ");
	}
	else if(a==0)
	{
	printf("This number is Neutral");
	}
	else if (a<0)
	{
	printf("This number is negative");
	}
	else
	{
	printf("Error");
	}
	getch();
}