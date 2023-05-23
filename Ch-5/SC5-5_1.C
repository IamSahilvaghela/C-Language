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
	printf("Enter c:");
	scanf("%d",&c);

	if(a==b && b==c && c==a)
	{
		printf("All are Same!!");
	}
	else if(a==b)
	{
		if(a<c)
		{
			printf("a and b are minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	else if(b==c)
	{
		if(b<a)
		{
			printf("b and c are minimum");
		}
		else
		{
			printf("a is minimum");
		}
	}
	else if(c==a)
	{
		if(c<b)
		{
			printf("c and a are minimum");
		}
		else
		{
			printf("b is minimum");
		}
	}
	else if(a<b)
	{
		if(a<c)
			printf("a is minimum");
		else
			printf("c is minimum");
	}
	else
	{
		if(b<c)
		{
			printf("b is minimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	getch();



}