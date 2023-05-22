#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	clrscr();
	printf("Enter parcentage:");
	scanf("%d",&a);

	if(a>=90 && a<=100)
	{
		printf("A1");
	}
	else if(a>=80 && a<=89)
	{
		printf("A2");
	}
	else if(a>=70 && a<=79)
	{
		printf("B1");
	}
	else if(a>=60 && a<=69)
	{
		printf("B2");
	}
	else if(a>=50 && a<=59)
	{
		printf("C1");
	}
	else if(a>=40 && a<=49)
	{
		printf("C2");
	}
	else if(a>=34 && a<=39)
	{
		printf("D");
	}
	else if (a>=0 && a<=33)
	{
		printf("FAIL");
	}
	else
	{
		printf("invalid number !!");
	}
	getch();

}